#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll mn = LLONG_MIN;
const ll z = (1LL << 31) - 1;

vector<pl> tree;
ll sz;

ll modify(ll a, ll b) {
    if (a == mn) return b;
    return a | b;
}

ll get(ll a, ll b) {
    return a & b;
}

void build(int n) {
    sz = 1;
    while (sz < n) sz *= 2;
    tree.assign(2 * sz, {mn, 0});
}

void propagate(int x, int lx, int rx) {
    if (tree[x].first == mn || rx == lx + 1) return;
    tree[2 * x + 1].first = modify(tree[2 * x + 1].first, tree[x].first);
    tree[2 * x + 1].second = modify(tree[2 * x + 1].second, tree[x].first);
    tree[2 * x + 2].first = modify(tree[2 * x + 2].first, tree[x].first);
    tree[2 * x + 2].second = modify(tree[2 * x + 2].second, tree[x].first);
    tree[x].first = mn;
}

void update(int l, int r, int v, int x, int lx, int rx) {
    propagate(x, lx, rx);
    if (lx >= r) return;
    if (rx <= l) return;
    if (lx >= l && rx <= r) {
        tree[x].first = modify(tree[x].first, v);
        tree[x].second = modify(tree[x].second, v);
    } else {
        int m = (lx + rx) / 2;
        update(l, r, v, 2 * x + 1, lx, m);
        update(l, r, v, 2 * x + 2, m, rx);
        tree[x].second = get(tree[2 * x + 1].second, tree[2 * x + 2].second);
    }
}

void update(int l, int r, int v) {
    update(l, r, v, 0, 0, sz);
}

ll get(int l, int r, int x, int lx, int rx) {
    propagate(x, lx, rx);
    if (lx >= r) return z;
    if (rx <= l) return z;
    if (lx >= l && rx <= r) {
        return tree[x].second;
    } else {
        int m = (lx + rx) / 2;
        ll v1 = get(l, r, 2 * x + 1, lx, m);
        ll v2 = get(l, r, 2 * x + 2, m, rx);
        return get(v1, v2);
    }
}

ll get(int l, int r) {
    return get(l, r, 0, 0, sz);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    build(n);

    int cmd, l, r, v;
    while (m--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> l >> r >> v;
            update(l, r, v);
        } else {
            cin >> l >> r;
            cout << get(l, r) << endl;
        }
    }

    return 0;
}
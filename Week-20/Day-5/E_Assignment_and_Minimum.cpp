#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll NO_OP = LLONG_MIN;
const ll EMPTY = LLONG_MAX;

vector<pl> tree;
int sz;

void build(int n) {
    sz = 1;
    while (sz < n) sz *= 2;
    tree.assign(2*sz, {NO_OP, 0});
}

void push(int x, int lx, int rx) {
    if (tree[x].first == NO_OP || rx == lx + 1) return;
    int m = (lx + rx) / 2;
    tree[2*x+1].first = tree[x].first;
    tree[2*x+1].second = tree[x].first;
    tree[2*x+2].first = tree[x].first;
    tree[2*x+2].second = tree[x].first;
    tree[x].first = NO_OP;
}

void range_assign(int l, int r, int v, int x, int lx, int rx) {
    push(x, lx, rx);
    if (lx >= r || rx <= l) return;
    if (lx >= l && rx <= r) {
        tree[x].first = v;
        tree[x].second = v;
        return;
    }
    int m = (lx + rx) / 2;
    range_assign(l, r, v, 2*x+1, lx, m);
    range_assign(l, r, v, 2*x+2, m, rx);
    tree[x].second = min(tree[2*x+1].second, tree[2*x+2].second);
}

ll range_min(int l, int r, int x, int lx, int rx) {
    push(x, lx, rx);
    if (lx >= r || rx <= l) return EMPTY;
    if (lx >= l && rx <= r) return tree[x].second;
    int m = (lx + rx) / 2;
    return min(range_min(l, r, 2*x+1, lx, m),
              range_min(l, r, 2*x+2, m, rx));
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
            range_assign(l, r, v, 0, 0, sz);
        } else {
            cin >> l >> r;
            ll res = range_min(l, r, 0, 0, sz);
            cout << res << endl;
        }
    }

    return 0;
}
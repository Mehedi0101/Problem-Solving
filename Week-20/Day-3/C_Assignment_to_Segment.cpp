#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll maxN = 1e5 + 9;
vector<pl> tree;

pl operation(pl a, pl b) {
    if (a.second > b.second) return a;
    return b;
}

pl query(ll node, ll index, ll st, ll sp) {
    if (st > index || sp < index) return {0, 0};
    if (st == sp) return tree[node];
    ll lt = (node << 1);
    ll rt = lt + 1;
    ll mid = st + ((sp - st) >> 1);
    pl q1 = query(lt, index, st, mid);
    pl q2 = query(rt, index, mid + 1, sp);
    return operation(operation(q1, q2), tree[node]);
}

ll query(ll index, ll st, ll sp) {
    pl p = query(1, index, st, sp);
    return p.first;
}

void update(ll node, ll l, ll r, ll st, ll sp, ll val, ll t) {
    if (st > r || sp < l) return;
    if (st >= l && sp <= r) {
        tree[node] = {val, t};
    } else {
        ll lt = (node << 1);
        ll rt = lt + 1;
        ll mid = st + ((sp - st) >> 1);
        update(lt, l, r, st, mid, val, t);
        update(rt, l, r, mid + 1, sp, val, t);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll size = 1;
    while (size < n) size *= 2;
    tree.assign(size * 2, {0, 0});

    for (ll i = 1; i <= m; i++) {
        ll op;
        cin >> op;
        if (op == 1) {
            ll l, r, val;
            cin >> l >> r >> val;
            r--;
            update(1, l, r, 0, n - 1, val, i);
        } else {
            ll index;
            cin >> index;
            cout << query(index, 0, n - 1) << endl;
        }
    }

    return 0;
}
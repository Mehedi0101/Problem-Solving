#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll NO_OP = LLONG_MIN;

vector<pair<ll,ll>> tree;
ll sz;

void build(ll n) {
    sz = 1;
    while (sz < n) sz *= 2;
    tree.assign(2*sz, {NO_OP, 0});
}

void push(ll x, ll lx, ll rx) {
    if (tree[x].first == NO_OP || rx == lx + 1) return;
    ll m = (lx + rx) / 2;
    tree[2*x+1].first = tree[x].first;
    tree[2*x+1].second = tree[x].first * (m - lx);
    tree[2*x+2].first = tree[x].first;
    tree[2*x+2].second = tree[x].first * (rx - m);
    tree[x].first = NO_OP;
}

void range_assign(ll l, ll r, ll v, ll x, ll lx, ll rx) {
    push(x, lx, rx);
    if (lx >= r || rx <= l) return;
    if (lx >= l && rx <= r) {
        tree[x].first = v;
        tree[x].second = v * (rx - lx);
        return;
    }
    ll m = (lx + rx) / 2;
    range_assign(l, r, v, 2*x+1, lx, m);
    range_assign(l, r, v, 2*x+2, m, rx);
    tree[x].second = tree[2*x+1].second + tree[2*x+2].second;
}

ll range_sum(ll l, ll r, ll x, ll lx, ll rx) {
    push(x, lx, rx);
    if (lx >= r || rx <= l) return 0;
    if (lx >= l && rx <= r) return tree[x].second;
    ll m = (lx + rx) / 2;
    return range_sum(l, r, 2*x+1, lx, m) + 
           range_sum(l, r, 2*x+2, m, rx);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    build(n);

    ll cmd, l, r, v;
    while (m--) {
        cin >> cmd;
        if (cmd == 1) {
            cin >> l >> r >> v;
            range_assign(l, r, v, 0, 0, sz);
        } else {
            cin >> l >> r;
            cout << range_sum(l, r, 0, 0, sz) << '\n';
        }
    }

    return 0;
}
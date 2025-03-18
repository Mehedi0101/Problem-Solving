#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll mod = 1e9 + 7;
const ll maxN = 1e5 + 9;
ll a[maxN], t[maxN * 4], k[maxN * 4];

void push(ll n, ll b, ll e) {
    if (k[n] != 1) {
        t[n] = (t[n] * k[n]) % mod;
        if (b != e) {
            k[2 * n] = (k[2 * n] * k[n]) % mod;
            k[2 * n + 1] = (k[2 * n + 1] * k[n]) % mod;
        }
        k[n] = 1;
    }
}

void build(ll n, ll b, ll e) {
    k[n] = 1;
    if (b == e) {
        t[n] = a[b];
        return;
    }
    ll mid = (b + e) / 2;
    build(2 * n, b, mid);
    build(2 * n + 1, mid + 1, e);
    t[n] = (t[2 * n] + t[2 * n + 1]) % mod;
}

void update(ll n, ll b, ll e, ll l, ll r, ll v) {
    push(n, b, e);
    if (e < l || r < b) return;
    if (l <= b && e <= r) {
        k[n] = (k[n] * v) % mod;
        push(n, b, e);
        return;
    }
    ll mid = (b + e) / 2;
    update(2 * n, b, mid, l, r, v);
    update(2 * n + 1, mid + 1, e, l, r, v);
    t[n] = (t[2 * n] + t[2 * n + 1]) % mod;
}

ll query(ll n, ll b, ll e, ll l, ll r) {
    push(n, b, e);
    if (e < l || r < b) return 0;
    if (l <= b && e <= r) return t[n];
    ll mid = (b + e) / 2;
    return (query(2 * n, b, mid, l, r) + query(2 * n + 1, mid + 1, e, l, r)) % mod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) a[i] = 1;
    build(1, 1, n);

    while (m--) {
        ll type;
        cin >> type;
        if (type == 1) {
            ll l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        } else {
            ll l, r;
            cin >> l >> r;
            l++;
            cout << query(1, 1, n, l, r) << endl;
        }
    }
    return 0;
}
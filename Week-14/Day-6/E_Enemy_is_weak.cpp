#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
    }
    vector<ll> tmp = v;
    sort(tmp.begin(), tmp.end());
    map<ll, ll> mp;
    for (ll i = 0; i < n; ++i) {
        mp[tmp[i]] = i + 1;
    }
    for (ll i = 0; i < n; ++i) {
        v[i] = mp[v[i]];
    }
    vector<ll> l(n);
    pbds<ll> p1;
    for (ll i = 0; i < n; ++i) {
        l[i] = p1.size() - p1.order_of_key(v[i] + 1);
        p1.insert(v[i]);
    }
    vector<ll> r(n);
    pbds<ll> p2;
    for (ll i = n - 1; i >= 0; --i) {
        r[i] = p2.order_of_key(v[i]);
        p2.insert(v[i]);
    }
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
        res += 1LL * l[i] * r[i];
    }

    cout << res << '\n';

    return 0;
}
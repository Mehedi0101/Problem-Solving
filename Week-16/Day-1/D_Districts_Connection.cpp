#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (auto &it : a) cin >> it;
        vector<pair<ll, ll>> res;
        ll idx = -1;
        for (ll i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                idx = i;
                res.push_back({1, i + 1});
            }
        }
        if (idx == -1) {
            no;
            continue;
        }
        for (ll i = 1; i < n; ++i) {
            if (a[i] == a[0]) {
                res.push_back({idx + 1, i + 1});
            }
        }
        yes;
        for (auto [x, y] : res) cout << x << " " << y << endl;
    }
    
    return 0;
}

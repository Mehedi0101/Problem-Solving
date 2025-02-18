#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll m;
        cin >> m;
        vector<ll> arr(m);
        for (ll i = 0; i < m; ++i) {
            cin >> arr[i];
        }

        vector<pair<ll, ll>> v;
        v.push_back({0, m});
        ll ans = 0;

        while (!v.empty()) {
            ll l = v.back().first;
            ll r = v.back().second;
            v.pop_back();

            if (r - l == 1) continue;

            ll mid = (l + r) / 2;
            ll mal = *max_element(arr.begin() + l, arr.begin() + mid);
            ll mar = *max_element(arr.begin() + mid, arr.begin() + r);
            
            if (mal > mar) {
                ++ans;
                for (ll i = 0; i < (mid - l); ++i)
                    swap(arr[l + i], arr[mid + i]);
            }
            
            v.push_back({l, mid});
            v.push_back({mid, r});
        }

        if (is_sorted(arr.begin(), arr.end())) {
            cout << ans << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
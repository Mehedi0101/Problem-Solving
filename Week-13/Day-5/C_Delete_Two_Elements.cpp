#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, sm = 0, ans = 0;
        cin >> n;
        vector<ll> arr(n);
        unordered_map<ll, ll> freq;
        
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
            sm += arr[i];
        }
        
        ll req = 2 * sm / n;
        if (sm * (n - 2) != (sm - req) * n) {
            cout << 0 << '\n';
            continue;
        }
        
        for (const ll &x : arr) {
            ans += freq[req - x];
            freq[x]++;
        }
        
        cout << ans << '\n';
    }
    return 0;
}

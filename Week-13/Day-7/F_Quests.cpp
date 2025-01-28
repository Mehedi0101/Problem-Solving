#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, c, d;
        cin >> n >> c >> d;

        vector<ll> a(n + 1), sum(n + 1);
        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
        }
        sort(a.begin() + 1, a.end(), greater<ll>());

        for (ll i = 1; i <= n; i++) {
            sum[i] = sum[i - 1] + a[i];
        }
        if (d * a[1] < c) {
            cout << "Impossible" << endl;
            continue;
        }
        ll mx = min(d, n);
        if (sum[mx] >= c) {
            cout << "Infinity" << endl;
            continue;
        }
        ll l = 0, r = d, ans = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            ll k = mid + 1;
            ll p = d / k;
            ll q = min(d % k, n);
            ll total = p * sum[min(k, n)] + sum[q];
            if (total >= c) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

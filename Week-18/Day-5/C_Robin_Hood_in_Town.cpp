#include<bits/stdc++.h>
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
        ll sum = 0;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        sort(a.begin(), a.end());

        if (n < 3) {
            cout << -1 << endl;
        } else {
            ll median = a[n / 2];
            ll required = 2 * median * n;
            ll result = max(0LL, required + 1 - sum);
            cout << result << endl;
        }
    }
    return 0;
}
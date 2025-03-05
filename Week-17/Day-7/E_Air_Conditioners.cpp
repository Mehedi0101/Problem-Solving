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

    ll T;
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(k), t(k);
        for (ll i = 0; i < k; i++) {
            cin >> a[i];
        }
        for (ll i = 0; i < k; i++) {
            cin >> t[i];
        }

        vector<ll> c(n, INT_MAX);
        for (ll i = 0; i < k; i++) {
            c[a[i] - 1] = t[i];
        }

        vector<ll> L(n, INT_MAX);
        ll p = INT_MAX;
        for (ll i = 0; i < n; i++) {
            p = min(p + 1, c[i]);
            L[i] = p;
        }

        vector<ll> R(n, INT_MAX);
        p = INT_MAX;
        for (ll i = n - 1; i >= 0; i--) {
            p = min(p + 1, c[i]);
            R[i] = p;
        }

        for (ll i = 0; i < n; i++) {
            cout << min(L[i], R[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}
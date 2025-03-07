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
        vector<ll> v;
        ll lb = -1;
        ll ub = INT_MAX;

        for (ll i = 0; i < n; i++) {
            ll type, value;
            cin >> type >> value;
            if (type == 3) {
                v.push_back(value);
            } else if (type == 1) {
                lb = max(lb, value);
            } else if (type == 2) {
                ub = min(ub, value);
            }
        }

        ll result = ub - lb + 1;
        for (ll val : v) {
            if (val >= lb && val <= ub) {
                result--;
            }
        }

        cout << max(0LL, result) << endl;
    }
    return 0;
}
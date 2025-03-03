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
        string s;
        cin >> s;

        vector<ll> v;
        ll cur = 0;

        for (ll p = n - 1; p >= 0; p--) {
            if (s[p] == '1') {
                cur++;
            } else {
                v.push_back(cur);
            }
        }

        for (ll p = 1; p < v.size(); p++) {
            v[p] += v[p - 1];
        }

        for (ll p = 0; p < n; p++) {
            if (p < v.size()) {
                cout << v[p] << " ";
            } else {
                cout << -1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
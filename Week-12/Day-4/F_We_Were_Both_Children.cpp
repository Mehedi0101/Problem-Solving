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
        ll n;
        cin >> n;
        vector<ll> freq(n + 1, 0), frogs(n + 1, 0);

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x <= n) freq[x]++;
        }

        for (ll x = 1; x <= n; x++) {
            for (ll j = x; j <= n; j += x) {
                frogs[j] += freq[x];
            }
        }

        cout << *max_element(frogs.begin(), frogs.end()) << endl;
    }
    return 0;
}
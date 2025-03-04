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
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n + 1);
        set<ll> s;
        vector<ll> l(k + 1, n + 1), r(k + 1, -1);

        for (ll i = 1; i <= n; i++) {
            cin >> a[i];
            l[a[i]] = min(l[a[i]], i);
            r[a[i]] = max(r[a[i]], i);
            s.insert(a[i]);
        }

        vector<ll> sufL = l;
        vector<ll> sufR = r;

        for (ll i = k - 1; i >= 1; i--) {
            sufL[i] = min(sufL[i], sufL[i + 1]);
            sufR[i] = max(sufR[i], sufR[i + 1]);
        }

        for (ll i = 1; i <= k; i++) {
            if (!s.count(i)) {
                cout << 0 << " ";
            } else {
                cout << 2 * (sufR[i] - sufL[i] + 1) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
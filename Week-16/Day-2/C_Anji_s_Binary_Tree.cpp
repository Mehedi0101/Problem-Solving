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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        vector<ll> l(n), r(n);
        for (ll i = 0; i < n; i++) {
            cin >> l[i] >> r[i];
        }

        vector<ll> ans(n, 1e9);
        vector<ll> left(n, -1), right(n, -1);

        for (ll i = 0; i < n; i++) {
            if (l[i] == 0 && r[i] == 0) {
                ans[i] = 0;
            }
            if (l[i]) {
                left[l[i] - 1] = i;
            }
            if (r[i]) {
                right[r[i] - 1] = i;
            }
        }

        set<pair<ll, ll>> sp;
        for (ll i = 0; i < n; i++) {
            sp.insert({ans[i], i});
        }

        while (!sp.empty()) {
            auto [x, i] = *sp.begin();
            sp.erase(sp.begin());

            if (x > ans[i]) continue;

            if (left[i] != -1 && ans[left[i]] > x + (s[left[i]] != 'L')) {
                ans[left[i]] = x + (s[left[i]] != 'L');
                sp.insert({ans[left[i]], left[i]});
            }

            if (right[i] != -1 && ans[right[i]] > x + (s[right[i]] != 'R')) {
                ans[right[i]] = x + (s[right[i]] != 'R');
                sp.insert({ans[right[i]], right[i]});
            }
        }

        cout << ans[0] << endl;
    }
    return 0;
}

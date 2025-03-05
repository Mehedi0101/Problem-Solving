#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll MAX_N = 200013;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        map<ll, vector<ll>> mp;
        vector<ll> ans(n, 0);

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (mp[x].size() < k) {
                mp[x].push_back(i);
            }
        }

        ll total = 0;
        for (auto x : mp) {
            total += x.second.size();
        }
        total -= total % k;

        ll color = 0;
        bool done = false;
        for (auto x : mp) {
            for (ll idx : x.second) {
                ans[idx] = color + 1;
                color = (color + 1) % k;
                total--;
                if (total == 0) {
                    done = true;
                    break;
                }
            }
            if (done) break;
        }

        for (ll i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
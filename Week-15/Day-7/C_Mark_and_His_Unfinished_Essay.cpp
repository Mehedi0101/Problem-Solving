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
        ll n, c, q;
        cin >> n >> c >> q;
        string s;
        cin >> s;
        vector<pl> C(c);
        vector<ll> Q(q);

        for (ll i = 0; i < c; i++) {
            cin >> C[i].first >> C[i].second;
        }
        for (ll i = 0; i < q; i++) {
            cin >> Q[i];
        }

        map<ll, pl> mp;
        ll now = s.size();
        mp[now] = {1, s.size()};

        for (ll i = 0; i < c; i++) {
            ll l = C[i].first;
            ll r = C[i].second;
            now += r - l + 1;
            mp[now] = {l, r};
        }

        vector<char> res;
        for (ll i = 0; i < q; i++) {
            ll query = Q[i];
            auto lb = mp.lower_bound(query);

            while (lb->first != s.size()) {
                if (prev(lb)->first < query) {
                    query = lb->second.second - (lb->first - query);
                }
                lb = prev(lb);
            }
            res.push_back(s[query - 1]);
        }

        for (char ch : res) {
            cout << ch << endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
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
    while(t--) {
        ll n, q;
        cin >> n >> q;
        string s[n];
        for(ll i = 0; i < n; i++) cin >> s[i];
        map<pair<char, char>, set<ll>> m;
        for(ll i = 0; i < n; i++) m[{s[i][0], s[i][1]}].insert(i + 1);
        for(ll i = 0; i < q; i++) {
            ll a, b;
            cin >> a >> b;
            if(a > b) swap(a, b);
            bool sm = false;
            if(s[a - 1][0] == s[b - 1][0] || s[a - 1][0] == s[b - 1][1] || s[a - 1][1] == s[b - 1][0] || s[a - 1][1] == s[b - 1][1]) sm = true;
            if(sm) {
                cout << b - a << endl;
                continue;
            }
            vector<pair<char, char>> tc;
            a--;
            vector<string> ap = {"BG", "BR", "BY", "GR", "GY", "RY"};
            for(auto ss : ap) {
                if(ss != s[a]) {
                    if(ss[0] == s[a][0] || ss[0] == s[a][1] || ss[1] == s[a][0] || ss[1] == s[a][1]) tc.push_back({ss[0], ss[1]});
                }
            }
            ll r = INT_MAX;
            for(auto c : tc) {
                auto it = m[c].upper_bound(a + 1);
                if(it != m[c].end()) {
                    ll p = *(it);
                    if(p < b) r = b - a - 1;
                    else r = min(r, p - a - 1 + p - b);
                }
                if(it != m[c].begin()) {
                    --it;
                    ll p = *(it);
                    r = min(r, a + 1 - p + b - p);
                }
            }
            if(r == INT_MAX) r = -1;
            cout << r << endl;
        }
    }
    return 0;
}
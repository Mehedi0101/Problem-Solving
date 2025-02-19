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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> child[n + 7];
        for (ll i = 2; i <= n; i++) {
            ll x;
            cin >> x;
            child[x].push_back(i);
        }
        
        string s;
        cin >> s;
        ll res = 0;
        stack<pair<ll, ll>> st;
        vector<ll> balance(n + 1, 0);
        
        st.push({1, 0});
        while (!st.empty()) {
            auto [node, processed] = st.top();
            if (processed == 0) {
                balance[node] = (s[node - 1] == 'B') ? -1 : 1;
                st.top().second = 1;
                for (ll childNode : child[node]) {
                    st.push({childNode, 0});
                }
            } else {
                st.pop();
                for (ll childNode : child[node]) {
                    balance[node] += balance[childNode];
                }
                if (balance[node] == 0) res++;
            }
        }
        
        cout << res << endl;
    }
    return 0;
}
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
        ll n, m;
        cin >> n >> m;

        vector<vector<ll>> adj(n + 1);

        for (int i = 1; i <= m; i++) {
            ll a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        ll goodNode = -1, x = 0, y = 0;

        for (int i = 1; i <= n; i++) {
            if (adj[i].size() == 1) {
                goodNode = adj[i][0];
                y = adj[adj[i][0]].size();
            }
        }

        for (auto adjNode : adj[goodNode]) {
            ll k = adj[adjNode].size();
            x = max(x, k);
        }

        cout << x << " " << (y - 1) << endl;
    }
    return 0;
}
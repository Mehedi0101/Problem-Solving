#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int MAX = 200007;
const int MOD = 1000000007;

vector<vector<int>> adj;
vector<bool> vis;
map<pair<int, int>, int> mp;

void dfs(int u, int prev) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            int val = (prev == 2 ? 3 : 2);
            mp[{u, v}] = val;
            mp[{v, u}] = val;
            dfs(v, val);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        adj.assign(n, vector<int>());
        vector<pair<int, int>> edges(n);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            adj[u].push_back(v);
            adj[v].push_back(u);
            edges[i] = {u, v};
        }
        int start = -1;
        for (int u = 0; u < n; u++) {
            if ((int)adj[u].size() > 2) {
                cout << -1 << endl;
                goto next_case;
            }
            if (adj[u].size() == 1) {
                start = u;
            }
        }
        mp.clear();
        vis.assign(n, false);
        dfs(start, 3);
        for (int i = 0; i < n - 1; i++) {
            cout << mp[{edges[i].first, edges[i].second}] << " ";
        }
        cout << endl;
        next_case:;
    }
    return 0;
}
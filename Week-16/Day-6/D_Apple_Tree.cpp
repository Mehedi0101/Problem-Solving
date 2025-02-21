#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

vector<vector<int>> adj;
vector<int> value;

int dfs(int x, int from) {
    int count = 0;
    for (auto child : adj[x]) {
        if (child != from) {
            count += dfs(child, x);
        }
    }
    if (count == 0 && adj[x].size() == 1) {
        count++;
    }
    value[x] = count;
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        adj.resize(n + 1);
        value.resize(n + 1, 0);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1, 1);
        int q;
        cin >> q;
        for (int i = 1; i <= q; i++) {
            int u, v;
            cin >> u >> v;
            ll ans = ((ll)value[u] * (ll)value[v]);
            cout << ans << endl;
        }
        adj.clear();
        value.clear();
    }
    return 0;
}
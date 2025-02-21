#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int MAX = 100010;

vector<ll> adj[MAX];
bool vis[MAX];
ll n, m, total = 0;
ll cc[MAX];

void dfs(ll s, ll sum) {
    if (vis[s])
        return;

    vis[s] = 1;

    if (cc[s])
        sum++;
    else
        sum = 0;

    if (sum > m)
        return;

    if (s != 1 && adj[s].size() == 1)
        total++;

    for (ll child : adj[s]) {
        dfs(child, sum);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
    for (ll i = 1; i <= n; i++)
        cin >> cc[i];
    
    for (ll i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    memset(vis, 0, sizeof(vis));
    dfs(1, 0);
    
    cout << total << endl;
    
    return 0;
}

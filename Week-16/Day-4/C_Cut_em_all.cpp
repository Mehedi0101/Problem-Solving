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

vector<ll> child[MAX];
bool visited[MAX];
ll res;

ll dfs(ll node) {
    visited[node] = true;
    ll count = 1;
    
    for (ll childNode : child[node]) {
        if (!visited[childNode]) {
            count += dfs(childNode);
        }
    }
    
    if (count % 2 == 0) res++;
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    
    for (ll i = 1; i <= n; i++) {
        child[i].clear();
        visited[i] = false;
    }
    
    for (ll i = 1; i < n; i++) {
        ll u, v;
        cin >> u >> v;
        child[u].push_back(v);
        child[v].push_back(u);
    }
    
    if (n % 2 == 1) {
        cout << "-1" << endl;
        return 0;
    }
    
    res = 0;
    dfs(1);
    cout << res - 1 << endl;
    
    return 0;
}
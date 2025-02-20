#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

vector<vector<int>> g;
ll s1, s2;

void dfs(int v, int p, int lvl) {
    if (lvl % 2 == 0) s1++;
    else s2++;
    
    for (int u : g[v]) {
        if (u != p) {
            dfs(u, v, lvl + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    g.resize(n);
    
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    dfs(0, -1, 0);
    cout << (s1 * s2) - (n - 1) << endl;
    
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

void DFS(ll row, ll col, vector<vector<ll>> &grid, vector<vector<ll>> &visited, ll &currSum, int dX[], int dY[]) {
    ll n = grid.size(), m = grid[0].size();
    stack<pair<ll, ll>> stk;
    stk.push({row, col});
    visited[row][col] = 1;
    
    while (!stk.empty()) {
        auto [r, c] = stk.top();
        stk.pop();
        currSum += grid[r][c];
        
        for (int i = 0; i < 4; i++) {
            int newRow = r + dX[i];
            int newCol = c + dY[i];
            
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m &&
                grid[newRow][newCol] != 0 && !visited[newRow][newCol]) {
                visited[newRow][newCol] = 1;
                stk.push({newRow, newCol});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll T;
    cin >> T;
    while (T--) {
        ll n, m;
        cin >> n >> m;
        
        vector<vector<ll>> grid(n, vector<ll>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> grid[i][j];
        
        vector<vector<ll>> visited(n, vector<ll>(m, 0));
        int dX[4] = {0, 1, 0, -1};
        int dY[4] = {1, 0, -1, 0};
        
        ll maxSum = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] != 0 && !visited[i][j]) {
                    ll currSum = 0;
                    DFS(i, j, grid, visited, currSum, dX, dY);
                    maxSum = max(maxSum, currSum);
                }
            }
        }
        
        cout << maxSum << endl;
    }
    
    return 0;
}

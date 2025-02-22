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

    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        int a = i, b = i;
        int y = x;
        while (x--) {
            grid[a][b] = y;
            if (b != 0 && grid[a][b - 1] == 0) {
                b--;
            } else {
                a++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
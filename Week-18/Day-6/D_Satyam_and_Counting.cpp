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
    
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<vector<ll>> a(n + 10, vector<ll>(2, 0));
        ll ans = 0;
        for (int i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        for (int i = 0; i <= n; i++) {
            if (a[i][0] && a[i][1]) ans += (n - 2);
            if (a[i][0] && a[i + 2][0] && a[i + 1][1]) ans++;
            if (a[i][1] && a[i + 2][1] && a[i + 1][0]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
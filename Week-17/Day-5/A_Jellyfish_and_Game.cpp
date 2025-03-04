#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int N = 1005;
int a[N], b[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        k--;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }

        int x = 0, y = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] < a[x]) {
                x = i;
            }
        }
        for (int i = 1; i < m; i++) {
            if (b[i] > b[y]) {
                y = i;
            }
        }

        if (b[y] > a[x]) {
            swap(a[x], b[y]);
        }

        if (k & 1) {
            x = 0, y = 0;
            for (int i = 1; i < n; i++) {
                if (a[i] > a[x]) {
                    x = i;
                }
            }
            for (int i = 1; i < m; i++) {
                if (b[i] < b[y]) {
                    y = i;
                }
            }
            swap(a[x], b[y]);
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}
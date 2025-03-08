#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const int N = 1e5 + 2;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1), ans1(n + 1), ans2(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        b[1] = 2;
        b[n] = n - 1;
        for (int i = 2; i < n; i++) {
            if (a[i] - a[i - 1] < a[i + 1] - a[i]) {
                b[i] = i - 1;
            } else {
                b[i] = i + 1;
            }
        }

        ans1[1] = 0;
        for (int i = 2; i <= n; i++) {
            ans1[i] = ans1[i - 1] + (b[i - 1] == i ? 1 : a[i] - a[i - 1]);
        }

        ans2[n] = 0;
        for (int i = n - 1; i >= 1; i--) {
            ans2[i] = ans2[i + 1] + (b[i + 1] == i ? 1 : a[i + 1] - a[i]);
        }

        int m;
        cin >> m;
        while (m--) {
            int x, y;
            cin >> x >> y;
            if (x < y) {
                cout << ans1[y] - ans1[x] << endl;
            } else {
                cout << ans2[y] - ans2[x] << endl;
            }
        }
    }
    return 0;
}
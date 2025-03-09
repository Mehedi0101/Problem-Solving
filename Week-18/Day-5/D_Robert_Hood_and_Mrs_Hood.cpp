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

    int t;
    cin >> t;
    while (t--) {
        int n, d, k;
        cin >> n >> d >> k;
        vector<int> a(n + 2, 0);

        for (int i = 1; i <= k; i++) {
            int l, r;
            cin >> l >> r;
            a[max(1, l - d + 1)]++;
            a[r + 1]--;
        }

        int mn = 1, mx = 1;
        for (int i = 1; i <= n - d + 1; i++) {
            a[i] += a[i - 1];
            if (a[i] < a[mn]) {
                mn = i;
            }
            if (a[i] > a[mx]) {
                mx = i;
            }
        }

        cout << mx << " " << mn << endl;
    }
    return 0;
}
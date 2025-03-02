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
        int n;
        cin >> n;
        vector<ll> v1(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v1[i];
        }

        bool can = true;
        for (int i = n; i >= 2; i--) {
            if (v1[i - 1] > v1[i]) {
                if (((i - 1) & (i - 2)) != 0) {
                    can = false;
                    break;
                }
            }
        }

        if (can) {
            yes;
        } else {
            no;
        }
    }
    return 0;
}
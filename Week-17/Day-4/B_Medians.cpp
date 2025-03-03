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
        ll n, k;
        cin >> n >> k;

        if (n == 1 && k == 1) {
            cout << "1 1" << endl;
        } else if (k == 1 || k == n) {
            cout << "-1" << endl;
        } else if (k % 2) {
            cout << "3" << endl;
            cout << "1 " << k - 1 << " " << k + 2 << endl;
        } else {
            cout << "3" << endl;
            cout << "1 " << k << " " << k + 1 << endl;
        }
    }
    return 0;
}
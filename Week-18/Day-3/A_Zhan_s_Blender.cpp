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
        ll f, sz, cap;
        cin >> f >> sz >> cap;

        ll x = (f + sz - 1) / sz;
        ll y = (f + cap - 1) / cap;

        cout << max(x, y) << endl;
    }
    return 0;
}
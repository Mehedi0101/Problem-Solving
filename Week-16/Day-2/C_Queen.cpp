#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> parent(n + 1), rmv(n + 1, 1), respect(n + 1);
    for (ll i = 1; i <= n; i++) {
        cin >> parent[i] >> respect[i];
    }

    for (ll i = 1; i <= n; i++) {
        if (respect[i] == 0) {
            rmv[i] = 0;
            if (parent[i] != -1) {
                rmv[parent[i]] = 0;
            }
        }
    }

    bool found = false;
    for (ll i = 1; i <= n; i++) {
        if (rmv[i] == 1) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "-1" << endl;
    }
    return 0;
}

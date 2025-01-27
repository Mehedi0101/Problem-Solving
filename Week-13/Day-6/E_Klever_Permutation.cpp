#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n, -1);

        for (ll r = 0, cur = 0; r < k; r++) {
            vector<ll> b;
            for (ll j = r; j < n; j += k) b.push_back(j);
            if (r & 1) reverse(b.begin(), b.end());
            for (const auto &j : b) a[j] = cur++;
        }

        for (auto x : a) cout << x + 1 << " ";
        cout << endl;
    }
    return 0;
}

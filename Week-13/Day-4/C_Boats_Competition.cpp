#include<bits/stdc++.h>
#define ll long long int
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
        ll n;
        cin >> n;
        vector<ll> w(n);

        for(ll i = 0; i < n; ++i) {
            cin >> w[i];
        }

        sort(w.begin(), w.end());

        ll mx = 0;
        for(ll s = 2; s <= 200; ++s) {
            ll l = 0, r = n - 1, p = 0;
            while(l < r) {
                if(w[l] + w[r] == s) {
                    ++p;
                    ++l;
                    --r;
                } else if(w[l] + w[r] < s) {
                    ++l;
                } else {
                    --r;
                }
            }
            mx = max(mx, p);
        }

        cout << mx << endl;
    }

    return 0;
}
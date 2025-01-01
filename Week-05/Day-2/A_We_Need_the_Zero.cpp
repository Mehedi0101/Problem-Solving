#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        bool b = false;
        for(ll i=0; i<=1000; i++){
            vector<ll> p(n);
            for(ll j=0; j<n; j++){
                p[j] = v[j]^i;
            }
            ll ans = 0;
            for(ll x:p){
                ans = ans^x;
            }
            if(ans == 0){
                cout << i << '\n';
                b = true;
                break;
            }
        }
        if(!b) cout << -1 << '\n';
    }
    return 0;
}
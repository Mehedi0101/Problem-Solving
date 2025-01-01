#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> bits(31,0);
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            for(int k=0; k<31; k++){
                if((x>>k)&1){
                    bits[k]++;
                }
            }
        }
        for(ll i=bits.size()-1; i>=0; i--){
            if(n-bits[i] <= k){
                k -= (n-bits[i]);
                bits[i] = n;
            }
        }
        ll ans = 0;
        for(ll i=0; i<bits.size(); i++){
            if(bits[i] == n){
                ans += (1LL << i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

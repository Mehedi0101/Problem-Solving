#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        ll l = n-m;
        ll r = n+m;
        if(l < 0) l = 0;
        ll ans = 0;
        ll val = 1;
        for(ll i=0; i<=32; i++){
            if(r-l >= val) ans += val;
            else if((l>>i)&1) ans += val;
            else if((r>>i)&1) ans += val;
            val *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
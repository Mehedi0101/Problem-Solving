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
        ll a = __lg(n);
        bool b = false;
        ll ans = 1;
        for(ll i=a-1; i>=0; i--){
            ll x = (n>>i)&1;
            if(x == 1){
                b = true;
            }
            if(x == 0 && b){
                ans *= 2;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
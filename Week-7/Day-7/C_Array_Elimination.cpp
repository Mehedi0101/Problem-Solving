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
        vector<ll> bits(32,0);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            ll y = __lg(x);
            for(ll j=y; j>=0; j--){
                if((x>>j)&1) {
                    bits[j]++;
                };
            }
        }
        vector<ll> ans;
        for(ll i=1; i<=n; i++){
            bool b = true;
            for(ll j:bits){
                if(j%i != 0){
                    b = false;
                    break;
                }
            }
            if(b) ans.push_back(i);
        }
        for(ll x:ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
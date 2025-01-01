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
        vector<ll> bits(32);
        while(n--){
            ll x;
            cin >> x;
            bits[__lg(x)]++;
        }
        ll ans = 0;
        for(ll x:bits){
            ans += x*(x-1)/2;
        }
        cout << ans << '\n';
    }
    return 0;
}
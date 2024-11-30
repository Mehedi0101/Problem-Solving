#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,mx=0;
        cin >> n;
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx,mp[x]);
        }
        ll r = n-mx, x = mx, op=0;
        while(r>0){
            op++;
            r -= x;
            op += x;
            x *= 2;
        }
        cout << op+r << '\n';
    }
    return 0;
}
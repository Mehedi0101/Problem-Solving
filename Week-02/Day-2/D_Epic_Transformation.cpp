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
        map<ll,ll> mp;
        ll mx = 0;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            mp[x]++;
            mx = max(mx,mp[x]);
        }
        if(mp.size() >= 2){
            if(mx <= n-mx){
                if(n%2 != 0) cout << 1 << "\n";
                else cout << 0 << "\n";
            }
            else{
                cout << mx-(n-mx) << '\n';
            }
        }
        else{
            cout << n << '\n';
        }
    }
    return 0;
}
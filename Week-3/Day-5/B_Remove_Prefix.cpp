#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k = -1;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        map<ll,ll> mp;
        ll ans = -1;
        for(ll i=n-1; i>=0; i--){
            mp[v[i]]++;
            if(mp[v[i]] > 1){
                ans = i;
                break;
            }
        }
        if(ans == -1) cout << 0 << '\n';
        else cout << ans+1 << '\n';
    }
    return 0;
}
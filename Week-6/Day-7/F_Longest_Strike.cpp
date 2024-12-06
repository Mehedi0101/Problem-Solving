#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        map<ll,ll> mp;
        while(n--){
            ll x;
            cin >> x;
            mp[x]++;
        }
        for(auto it=mp.begin(); it != mp.end(); ){
            if(it->second < k){
                it = mp.erase(it);
            }
            else{
                ++it;
            }
        }
        if(mp.empty()){
            cout << -1 << '\n';
            continue;
        }
        ll i = mp.begin()->first;
        ll cnt = 0, len = 0, ans = -1;
        for(auto [key,val]:mp){
            if(i == (key-cnt)){
                cnt++;
                if(cnt > len){
                    len = cnt;
                    ans = key;
                }
            }
            else{
                i = key;
                cnt = 1;
            }
        }
        cout << ans-len+1 << " " << ans << '\n';
    }
    return 0;
}
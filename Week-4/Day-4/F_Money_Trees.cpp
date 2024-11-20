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
        vector<ll> f(n), h(n);
        for(ll i=0; i<n; i++){
            cin >> f[i];
        }
        for(ll i=0; i<n; i++){
            cin >> h[i];
        }
        if(n == 1){
            if(f[0] <= k) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else{
            vector<ll> pos;
            for(ll i=0; i<n; i++){
                if(i == n-1 || h[i]%h[i+1] != 0) pos.push_back(i);
            }
            ll ans = 0;
            for(ll i=0; i<pos.size(); i++){
                ll x, y, sum=0;
                if(i == 0){
                    x = 0;
                    y = 0;
                }
                else{
                    x = pos[i-1]+1;
                    y = pos[i-1]+1;
                }
                while(y<=pos[i]){
                    sum += f[y];
                    if(sum <= k){
                        ans = max(ans,y-x+1);
                        y++;
                    }
                    else{
                        sum -= f[y];
                        sum -= f[x];
                        x++;
                    }
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
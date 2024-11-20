#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n), ps(n+1);
        ps[0] = 0;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            ps[i+1] = ps[i]+v[i];
        }
        priority_queue<ll> rp;
        priority_queue<ll,vector<ll>,greater<ll>> lp;
        for(ll i=0; i<n; i++){
            char x;
            cin >> x;
            if(x == 'L') lp.push(i);
            else rp.push(i);
        }
        ll ans = 0;
        while(!lp.empty() && !rp.empty()){
            ll l = lp.top();
            ll r = rp.top();
            if(ps[r+1]-ps[l] > 0) ans += ps[r+1]-ps[l];
            lp.pop();
            rp.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}
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
        string s;
        cin >> s;

        queue<ll> pos;
        for(ll i=0; i<n; i++){
            if(s[i] == 'B') pos.push(i);
        }

        ll ans = 0;
        while(!pos.empty()){
            ll x = pos.front();
            while(!pos.empty() && pos.front() <= x+k-1){
                pos.pop();
            }
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}
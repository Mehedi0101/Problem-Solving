#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    map<ll,ll> mp1,mp2;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        mp1[x]++;
    }
    for(ll i=0; i<m; i++){
        ll x;
        cin >> x;
        mp2[x]++;
    }
    auto it = mp1.begin(), jt = mp2.begin();
    ll ans = 0;
    while(it != mp1.end() && jt != mp2.end()){
        if(it->first == jt->first){
            ans += it->second * jt->second;
            it++;
            jt++;
        }
        else{
            if(it->first < jt->first) it++;
            else jt++;
        }
    }
    cout << ans << '\n';
    return 0;
}
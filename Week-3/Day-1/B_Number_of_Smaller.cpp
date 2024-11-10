#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    map<ll,ll> mp;
    for(ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        mp[x+1] = i;
    }
    while(m--){
        ll x;
        cin >> x;
        auto ub = mp.upper_bound(x);
        if(ub == mp.begin()){
            cout << 0 << " ";
        }
        else if(ub == mp.end()){
            
            cout << mp.rbegin()->second << " ";
        }
        else{
            ub--;
            cout << ub->second << " ";
        }
    }
    return 0;
}
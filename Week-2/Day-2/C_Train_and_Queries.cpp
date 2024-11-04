#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        map<ll,vector<ll>> mp;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            mp[x].push_back(i);
        }
        while(q--){
            ll a,b;
            cin >> a >> b;
            auto sta = mp.find(a);
            auto stb = mp.find(b);
            if(sta == mp.end() || stb == mp.end()){
                cout << "NO" << '\n';
            }
            else{
                if(mp[a][0]<mp[b][mp[b].size()-1]) cout << "YES" << '\n';
                else cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
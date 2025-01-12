#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        map<tuple<ll,ll,ll>,ll> mp;
        ll ans = 0;
        for(ll i=0; i<n-2; i++){
            ll x = mp[{v[i],v[i+1],0}]+mp[{v[i],0,v[i+2]}]+mp[{0,v[i+1],v[i+2]}]-3*mp[{v[i],v[i+1],v[i+2]}];
            ans += x;
            mp[{v[i],v[i+1],0}]++;
            mp[{v[i],0,v[i+2]}]++;
            mp[{0,v[i+1],v[i+2]}]++;
            mp[{v[i],v[i+1],v[i+2]}]++;
        }
        cout << ans << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> x;
        map<ll,bool> mp;
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=0; i<q; i++){
            ll k;
            cin >> k;
            if(!mp[k]){
                mp[k] = true;
                x.push_back(k);
            }
        }
        for(ll i=0; i<x.size(); i++){
            for(ll j=0; j<n; j++){
                if(v[j]%(1LL<<x[i]) == 0){
                    v[j] += (1LL<<(x[i]-1));
                }
            }
        }
        for(ll x:v){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
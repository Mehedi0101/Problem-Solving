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
    ll m = 1e3+1;
    vector<bool> p(m,true);
    vector<ll> prime;
    for(ll i=2; i<=m; i++){
        if(p[i]){
            prime.push_back(i);
            for(ll j=i+i; j<=m; j+=i) p[j] = false;
        }
    }
    while(T--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        vector<ll> color(n,0);
        unordered_map<ll,ll> mp;
        ll c = 0;
        for(ll i=0; i<prime.size(); i++){
            for(ll j=0; j<n; j++){
                if(color[j] == 0 && v[j]%prime[i] == 0){
                    if(mp.find(prime[i]) == mp.end()){
                        c++;
                        mp[prime[i]] = c;
                        color[j] = c;
                    }
                    else{
                        color[j] = mp[prime[i]];
                    }
                }
            }
        }
        cout << mp.size() << endl;
        for(ll x:color) cout << x << " ";
        cout << endl;
    }
    return 0;
}
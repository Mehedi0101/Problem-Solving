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

    ll t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	map<ll,ll> mp;
    	for(ll i=1; i<=n; i++){
    		ll x;
    		cin >> x;
    		mp[x] = i;
    	}
    	ll ans = -1;
    	vector<pl> v;
    	for(auto [key, val]:mp){
    		v.push_back({key,val});
    	}
    	ll k=v.size();
    	for(ll i=0; i<k; i++){
    		for(ll j=i; j<k; j++){
    			if(__gcd(v[i].first,v[j].first) == 1){
    				ans = max(ans,v[i].second+v[j].second);
    			}
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}

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

    ll n,k;
    cin >> n >> k;
    vector<ll> ps(n+1,0);
    for(ll i=1; i<=n; i++){
    	ll x;
    	cin >> x;
    	ps[i] = ps[i-1]+x;
    }
    ll ans = 0;
    map<ll,ll> mp;
    for(ll x:ps){
    	ll y = x-k;
    	auto it = mp.find(y);
    	if(it != mp.end()) ans += mp[y];
    	mp[x]++;
    }
    cout << ans << endl;
    return 0;
}
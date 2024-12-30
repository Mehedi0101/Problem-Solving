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
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    map<ll,ll> mp;
    ll i=0, j=0, ans=0;
    while(j<n){
    	mp[v[j]]++;
    	if(mp.size() <= k) ans += (j-i)+1;
    	else{
    		mp[v[i]]--;
    		if(mp[v[i]] == 0) mp.erase(v[i]);
    		i++;
    	    mp[v[j]]--;
    	    if(mp[v[j]] == 0) mp.erase(v[j]);
    	    j--;
    	}
    	j++;
    }
    cout << ans << endl;
    return 0;
}

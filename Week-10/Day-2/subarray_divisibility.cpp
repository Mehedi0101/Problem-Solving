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

    ll n, ans = 0;
    cin >> n;
    vector<ll> ps(n+1,0);
    for(ll i=1; i<=n; i++){
    	ll x;
    	cin >> x;
    	ps[i] = ps[i-1]+x;
    }
    map<ll,ll> mp;
    for(ll x:ps){
    	ll k =   ((x%n)+n)%n;
    	auto it = mp.find(k);
    	if(it != mp.end()) ans += mp[k];
    	mp[k]++;
    }
    cout << ans << endl;
    return 0;
}
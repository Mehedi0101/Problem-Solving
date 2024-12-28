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
    map<ll,ll> mp;
    mp[1] = 1;
    ll i=3, j=1,k=1;
    while(k<=1e5){
    	k += i;
    	j++;
    	mp[k] = j;
    	i *= 2;
    }
    while(t--){
    	ll n;
    	cin >> n;
    	auto it = mp.lower_bound(n);
    	cout << it->second << endl;
    }
    return 0;
}
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
    	vector<ll> ps(n);
    	for(ll i=0; i<n; i++){
    		ll x;
    		cin >> x;
    		if(i==0){
    			ps[i] = x;
    		}
    		else{
    			ps[i] = ps[i-1]+x;
    		}
    	}
    	ll gcd = 0;
    	for(ll i=0; i<n-1; i++){
    		ll x = __gcd(ps[i],ps[n-1]-ps[i]);
    		gcd = max(gcd,x);
    	}
    	cout << gcd << endl;
    }
    return 0;
}

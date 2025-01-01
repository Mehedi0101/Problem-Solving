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

    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
    	ll x;
    	cin >> x;
    	auto it = upper_bound(v.begin(),v.end(),x);
    	if(it == v.end()) v.push_back(x);
    	else{
    		*it = x;
    	}
    }
    cout << v.size() << endl;
    
    return 0;
}
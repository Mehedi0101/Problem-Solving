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
    	string s;
    	cin >> s;
    	map<char,ll> mp;
    	for(char c:s){
    		mp[c]++;
    	}
    	if(mp['s'] == 0 || mp['p'] == 0) yes;
  	  else if(s[0] != 'p' && s[n-1] != 's'){
    		mp[s[0]]--;
    		mp[s[n-1]]--;
    		if(mp['s']==0 || mp['p']==0) yes;
    		else no;
    	}
    	else no;
    }
    return 0;
}
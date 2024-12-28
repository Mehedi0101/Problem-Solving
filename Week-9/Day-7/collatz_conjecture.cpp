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
    	ll x,y,k;
    	cin >> x >> y >> k;
    	while(k > 0){
    		ll a = (x/y)+1;
    		if(a*y-x <= k){
    			k -= (a*y-x);
    			x = a*y;
    			while(x%y == 0){
    				x = x/y;
    			}
    		}
    		else{
    			x += k;
    			k = 0;
    		}
    		if(x < y){
    			if(y-x > k){
    				x += k;
    				k = 0;
    			}
    			else{
    				k -= (y-x);
    				x = 1;
    				x += (k%(y-1));
    				k = 0;
    			}
    		}
    	}
    	cout << x << endl;
    }
    return 0;
}

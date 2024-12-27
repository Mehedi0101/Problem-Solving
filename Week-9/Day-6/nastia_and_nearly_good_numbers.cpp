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
    	ll a,b;
    	cin >> a >> b;
    	if(b == 1) cout << "NO" << endl;
    	else{
    		cout << "YES" << endl;
    		cout << a*b << " " << a*(b-1) << " " << (a*b)+(a*(b-1)) << endl;
    	}
    }
    return 0;
}
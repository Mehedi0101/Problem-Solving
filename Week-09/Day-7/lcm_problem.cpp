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
    	ll l,r;
    	cin >> l >> r;
    	if(l*2 > r) cout << -1 << " " << -1 << endl;
    	else cout << l << " " << l*2 << endl;
    }
    return 0;
}
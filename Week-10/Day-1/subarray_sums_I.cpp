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

    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
    	cin >> v[i];
    }
    ll i=0, j=0, sum=0, ans=0;
    while(j<n){
    	sum += v[j];
    	if(sum >= x){
    		if(sum == x) ans++;
    		sum-=v[j];
    		j--;
    		sum-=v[i];
    		i++;
    	}
    	j++;
    }
    cout << ans << endl;
    return 0;
}
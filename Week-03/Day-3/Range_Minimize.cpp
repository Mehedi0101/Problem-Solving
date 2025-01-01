#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        cout << min({v[n-2]-v[1],v[n-3]-v[0],v[n-1]-v[2]}) << '\n';
    }
    return 0;
}
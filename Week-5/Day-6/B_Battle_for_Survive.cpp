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
        ll k = n-2;
        ll x = v[k];
        for(ll i=0; i<k; i++){
            x -= v[i];
        }
        cout << v[n-1]-x << '\n'; 
    }
    return 0;
}
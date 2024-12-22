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
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        ll gcd1 = v[0];
        ll gcd2 = v[1];
        for(ll i=2; i<n; i+=2){
            gcd1 = __gcd(gcd1,v[i]);
        }
        for(ll i=1; i<n; i+=2){
            gcd2 = __gcd(gcd2,v[i]);
        }
        ll ans = 0;
        bool x = true;
        for(ll i=1; i<n; i+=2){
            if(v[i]%gcd1 == 0){
                x = false;
                break;
            }
        }
        if(x) ans = gcd1;
        x = true;
        for(ll i=0; i<n; i+=2){
            if(v[i]%gcd2 == 0){
                x = false;
                break;
            }
        }
        if(x) ans = gcd2;
        cout << ans << endl;
    }
    return 0;
}
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

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        map<ll,ll> mp;
        for(ll i=0; i<n; i++){
            map<ll,ll> mp2;
            ll x = v[i];
            for(ll j=2; j*j <= x; j++){
                while(x%j == 0){
                    mp2[j]++;
                    x /= j;
                }
            }
            if(x > 1) mp2[x]++;
            for(auto [key,val]:mp2){
                mp[key] += val;
            }
        }
        bool ans = true;
        for(auto [key,val]:mp){
            if(val%n != 0){
                ans = false;
                break;
            }
        }
        ans ? yes : no;
    }
    return 0;
}
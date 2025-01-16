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
    ll m = 1e5;
    vector<bool> b(m,true);
    vector<ll> prime;
    for(ll i=2; i<=m; i++){
        if(b[i]){
            prime.push_back(i);
            for(ll j=i+i; j<=m; j+=i){
                b[j] = false;
            }
        }
    }
    while(T--){
        ll n;
        cin >> n;
        ll ans = 0;
        for(ll i=0; i<prime.size(); i++){
            if(prime[i] > n){
                ans += prime[i];
                break;
            }
        }
        for(ll i=0; i<prime.size(); i++){
            if(prime[i]-ans >=n){
                ans *= prime[i];
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
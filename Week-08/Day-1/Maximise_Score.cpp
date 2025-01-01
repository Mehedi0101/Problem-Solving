#include<bits/stdc++.h>
#define ll long long int
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
        ll ans = LLONG_MAX;
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        for(ll i=0; i<n; i++){
            if(i == 0){
                ans = min(ans,abs(v[i]-v[i+1]));
            }
            else if(i == n-1){
                ans = min(ans,abs(v[i]-v[i-1]));
            }
            else{
                ll x = max(abs(v[i]-v[i+1]),abs(v[i]-v[i-1]));
                ans = min(ans,x);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
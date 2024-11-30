#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k,z=0;
        cin >> n >> k;
        string str;
        cin >> str;
        vector<ll> v;
        v.push_back(0);
        v.push_back(n+1);
        for(ll i=0; i<n; i++){
            if(str[i] == '1') v.push_back(i+1);
            else z++;
        }
        sort(v.begin(),v.end());
        ll ans = 0;
        for(ll i=1; i<v.size(); i++){
            if(v[i-1] == 0 && v[i] == n+1){
                ans += ceil((v[i]-v[i-1]-1)*1.0/(k+1));
            }
            else if(v[i-1] == 0 || v[i] == n+1){
                ans += (v[i]-v[i-1]-1)/(k+1);
            }
            else{
                ans += (v[i]-v[i-1]-k-1)/(k+1);
            }
        }
        if(z == n){
            ll x = 1;
            cout << max(x,ans) << '\n';
        }
        else cout << ans << '\n';
    }
    return 0;
}
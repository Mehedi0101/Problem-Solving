#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k,q;
        cin >> n >> k >> q;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        vector<ll> sect;
        ll i=0, j=0;
        while(j<=n){
            if(j == n || v[j] > q){
                if(j-i >= k) sect.push_back(j-i);
                i = j+1;
            }
            j++;
        }
        ll ans = 0;
        for(ll x:sect){
            ll p = (x-k)+1;
            ll sum = p*(p+1)/2;
            ans += sum;
        }
        cout << ans << '\n';
    }
    return 0;
}
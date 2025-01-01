#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> v(m+1);
    for(ll i=0; i<=m; i++){
        cin >> v[i];
    }
    ll ans = 0;
    for(ll i=0; i<m; i++){
        ll x = v[m]^v[i];
        ll dif = 0;
        for(int j=20; j>=0; j--){
            if(check_kth_bit_on_or_off(x,j)) dif++;
        }
        if(dif <= k) ans++;
    }
    cout << ans << '\n';
    return 0;
}
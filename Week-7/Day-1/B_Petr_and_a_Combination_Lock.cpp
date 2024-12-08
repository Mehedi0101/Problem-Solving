#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    bool ans = false;
    for(ll i=0; i < (1 << n); i++){
        ll sum0 = 0, sum1 = 0;
        for(ll j=0; j < n; j++){
            if((i >> j) & 1){
                sum1 += v[j];
                sum1 = sum1%360;
            }
            else{
                sum0 += v[j];
                sum0 = sum0%360;
            }
        }
        if(sum0 == sum1){
            ans = true;
            break;
        }
    }
    ans ? cout << "YES" << '\n' : cout << "NO" << '\n';
    return 0;
}
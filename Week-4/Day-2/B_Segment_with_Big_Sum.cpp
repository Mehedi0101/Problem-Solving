#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll i=0, j=0, sum = 0, ans = LLONG_MAX;
    while(j<n){
        if(sum + v[j] < s){
            sum += v[j];
            j++;
        }
        else{
            ans = min(ans,j-i+1);
            sum -= v[i];
            i++;
        }
    }
    if(ans == LLONG_MAX) cout << -1 << '\n';
    else cout << ans << '\n';
    return 0;
}
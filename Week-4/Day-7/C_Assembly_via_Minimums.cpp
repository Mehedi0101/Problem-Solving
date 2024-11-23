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
        ll m = n*(n-1)/2;
        vector<ll> v(m);
        for(ll i=0; i<m; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<ll> ans(n);
        ll pos = 0;
        ans[0] = v[0];
        for(ll i=n-1; i>1; i--){
            pos += i;
            ans[n-i] = v[pos];
        }
        ans[n-1] = v[m-1];
        for(ll x:ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
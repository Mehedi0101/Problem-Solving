#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll a, b, n, ans = 0;
        cin >> a >> b >> n;
        ans += b;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            ans += min(x,a-1);
        }
        cout << ans << '\n';
    }
    return 0;
}
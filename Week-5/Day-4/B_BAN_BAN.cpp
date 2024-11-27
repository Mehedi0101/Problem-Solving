#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        ll ans = ceil(x*1.0/2.0), i=1, j=x*3;
        cout << ans << '\n';
        for(ll k=1; k<=ans; k++){
            cout << i << " " << j << '\n';
            i += 3;
            j -= 3;
        }
    }
    return 0;
}
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
        ll zc=0, oc=0, tc=0;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x == 0) zc++;
            else if(x == 1) oc++;
            else tc++;
        }
        if(zc-1 <= oc+tc) cout << 0 << '\n';
        else{
            if(n>3 && tc == 0 && oc > 0) cout << 2 << '\n';
            else cout << 1 << '\n';
        }
    }
    return 0;
}
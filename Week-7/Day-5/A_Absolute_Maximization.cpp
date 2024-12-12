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
        ll orr, andd;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(i == 1){
                orr = x;
                andd = x;
            }
            else{
                orr = orr | x;
                andd = andd & x;
            }
        }
        cout << orr-andd << '\n';
    }
    return 0;
}
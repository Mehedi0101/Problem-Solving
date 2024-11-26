#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        for(ll i=n-k; i>=1; i--){
            cout << i << " ";
        }
        for(ll i=n-k+1; i<=n; i++){
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
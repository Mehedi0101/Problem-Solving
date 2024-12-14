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
        vector<ll> bits(32);
        ll x = __lg(n);
        for(ll i=x; i>=0; i--){
            if((n>>i)&1) bits[i] = 1;
        }
        for(ll i=1; i<32; i++){
            if(bits[i] == 2){
                bits[i] = 0;
                bits[i+1]++;
            }
            else if(bits[i] != 0 && bits[i-1] != 0){
                bits[i-1] = -1;
                bits[i] = 0;
                bits[i+1]++;
            }
        }
        cout << 32 << '\n';
        for(ll i=0; i<32; i++){
            cout << bits[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
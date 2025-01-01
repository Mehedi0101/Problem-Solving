#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<bool> bits(31,false);

        while(n--){
            ll x;
            cin >> x;
            for(int k=30; k>=0; k--){
                if(check_kth_bit_on_or_off(x,k)) bits[k] = true;
            }
        }

        ll ans = 0;
        for(ll i=0; i<31; i++){
            if(bits[i]) ans += pow(2,i);
        }
        cout << ans << '\n';
    }
    return 0;
}
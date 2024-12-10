#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

void print_bits(int n){
    for(int k=31; k>=0; k--){
        cout << check_kth_bit_on_or_off(n,k) << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll x = pow(2,__lg(n));
        ll y = 0;
        for(ll i=0; i<__lg(n); i++){
            if(check_kth_bit_on_or_off(n,i)) y += (pow(2,i));
        }
        cout << y << " " << x << '\n';
    }
    return 0;
}
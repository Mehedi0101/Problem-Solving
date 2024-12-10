#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    ll n = s.size();
    for(ll i=0; i<n; i++){
        if(s[i] == '4') s[i] = '0';
        else s[i] = '1';
    }
    for(ll i=0; i<(1LL<<n); i++){
        string k = "";
        for(int j=n-1; j>=0; j--){
            k += to_string(check_kth_bit_on_or_off(i,j));
        }
        if(k == s){
            ll ans;
            if(n>1){
                ans = pow(2,n)+i-1;
            }
            else{
                ans = i+1;
            }
            cout << ans << '\n';
            break;
        }
    }
    return 0;
}
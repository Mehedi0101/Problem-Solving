#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin >> a >> b;
    
    ll sp=0, sm=0, rp=0, rm=0;
    for(char c:a){
        if(c == '+') sp++;
        else sm++;
    }
    for(char c:b){
        if(c == '+') rp++;
        else if(c == '-') rm++;
    }

    long double ans = 0.0;
    if(rp > sp || rm > sm){
        cout << fixed << setprecision(12) << ans << '\n';
    }
    else{
        ll dp = sp-rp;
        ll dm = sm-rm;
        ll n = dp+dm;
        ll k = 0;
        for(ll i=0; i<(1<<n); i++){
            ll on = 0;
            for(ll j=0; j<=10; j++){
                if(check_kth_bit_on_or_off(i,j)) on++;
            }
            if(on == dp) k++;
        }
        ans = k*1.0/(1<<n);
        cout << fixed << setprecision(12) << ans << '\n';
    }
    return 0;
}
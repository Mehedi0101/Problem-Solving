#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll ans = 0, s, m;
    cin >> s >> m;
    for(ll i=0; i<=s; i++){
        for(ll j=0; j<=s; j++){
            for(ll k=0; k<=s; k++){
                if(i+j+k <= s && i*j*k <=m) ans++;
                else break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
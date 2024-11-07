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
        vector<ll> v(n);
        vector<ll> m(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        for(ll i=0; i<n; i++){
            ll k;
            string str;
            cin >> k >> str;
            ll x = 0;
            for(char c:str){
                if(c == 'U') x--;
                else x++;
            }
            m[i] = x%10;
        }
        for(ll i=0; i<n; i++){
            ll x = (v[i]+m[i])%10;
            if(x >= 0) cout << x << " ";
            else cout << 10+x << " ";
        }
        cout << '\n';
    }
    return 0;
}
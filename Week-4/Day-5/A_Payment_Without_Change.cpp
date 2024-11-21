#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        ll x;
        if(a*n >= s) x = s%n;
        else x = s-(a*n);
        if(b >= x) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}
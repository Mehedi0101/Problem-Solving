#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        ll e1 = a-1;
        ll e2;
        if(b>c) e2 = b-1;
        else e2 = (c-b)+(c-1);
        if(e1 < e2) cout << 1 << '\n';
        else if(e2 < e1) cout << 2 << '\n';
        else cout << 3 << '\n';
    }
    return 0;
}
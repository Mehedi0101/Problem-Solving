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
        string a,b;
        cin >> a >> b;
        for(ll i=0; i<n; i++){
            if(a[i] == 'B') a[i] = 'G';
            if(b[i] == 'B') b[i] = 'G';
        }
        a == b ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
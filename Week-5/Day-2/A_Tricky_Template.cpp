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
        string a,b,c;
        cin >> a >> b >> c;
        bool ans = false;
        for(ll i=0; i<n; i++){
            if(c[i] != a[i] && c[i] != b[i]){
                ans = true;
                break;
            }
        }
        ans ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
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

        string s,k;
        cin >> s >> k;

        ll op = INT_MAX;
        for(ll i=0; i<n; i++){
            if(s[i] == '1'){
                op = i;
                break;
            }
        }
        
        for(ll i=n-1; i>=0; i--){
            if(s[i] != k[i] && op <= i){
                s[i] = k[i];
            }
        }

        s == k ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
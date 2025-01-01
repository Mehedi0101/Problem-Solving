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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        set<ll> gl;
        ll ans = LLONG_MIN;
        for(ll i=0; i<n; i++){
            if(s[i] == 'g'){
                gl.insert(i);
            }
        }
        for(ll i=0; i<n; i++){
            if(s[i] == c){
                auto ub = gl.lower_bound(i);
                if(ub != gl.end()){
                    ans = max(ans,*ub-i);
                }
                else{
                    ans = max(ans,(n-i)+*gl.begin());
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
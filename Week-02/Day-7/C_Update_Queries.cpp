#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<ll> rp;
        for(ll i=0; i<m; i++){
            ll x;
            cin >> x;
            rp.insert(x-1);
        }
        string c;
        cin >> c;
        sort(c.begin(),c.end());
        ll i = 0;
        for(auto it=rp.begin(); it!=rp.end(); it++){
            s[*it] = c[i];
            i++;
        }
        cout << s << '\n';
    }
    return 0;
}
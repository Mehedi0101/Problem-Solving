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
        vector<ll> ans;
        for(ll i=0; i<=__lg(n); i++){
            if((n>>i)&1){
                ll x = n-(1LL << i);
                if(x > 0) ans.push_back(x);
            }
        }
        cout << ans.size()+1 << '\n';
        for(auto i=ans.rbegin(); i!=ans.rend(); i++){
            cout << *i << " ";
        }
        cout << n << '\n';
    }
    return 0;
}

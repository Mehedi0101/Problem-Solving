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
        multiset<ll> ms;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            ms.insert(x);
        }
        ll ans = 0;
        auto it = ms.begin();
        while(!ms.empty()){
            auto ub = ms.upper_bound(*it);
            if(ub != ms.end() && *it+1 == *ub){
                ms.erase(it);
                it = ub;
            }
            else{
                ms.erase(it);
                it = ms.begin();
                ans++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
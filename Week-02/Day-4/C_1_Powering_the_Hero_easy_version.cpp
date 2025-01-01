#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, p = 0;
        cin >> n;
        multiset<ll> ms;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x == 0){
                if(ms.size() > 0){
                    auto it = --ms.end();
                    p+=*it;
                    ms.erase(it);
                }
            }
            else{
                ms.insert(x);
            }
        }
        cout << p << '\n';
    }
    return 0;
}
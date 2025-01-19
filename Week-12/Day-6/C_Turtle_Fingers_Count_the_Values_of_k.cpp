#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll a,b,l;
        cin >> a >> b >> l;
        vector<ll> divs;
        for(ll i=1; i*i<=l; i++){
            if(l%i == 0){
                if(l/i == i) divs.push_back(i);
                else{
                    divs.push_back(l/i);
                    divs.push_back(i);
                }
            }
        }
        ll ans = 0;
        vector<ll> v1,v2;
        for(ll i=0; i<=20; i++){
            ll x = ceil(pow(a,i));
            if(x > 1e6) break;
            else{
                v1.push_back(x);
            }
        }
        for(ll i=0; i<=20; i++){
            ll x = ceil(pow(b,i));
            if(x > 1e6) break;
            else{
                v2.push_back(x);
            }
        }
        for(ll x:divs){
            bool bl = false;
            for(ll i=0; i<v1.size(); i++){
                for(ll j=0; j<v2.size(); j++){
                    if(x*v1[i]*v2[j] == l){
                        bl = true;
                        break;
                    }
                }
                if(bl) break;
            }
            if(bl) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
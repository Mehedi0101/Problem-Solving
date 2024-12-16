#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        ll cur = -1, ml = LLONG_MAX;
        for(ll x:v){
            if(x >= cur && ml == LLONG_MAX){
                cout << 1;
                cur = x;
            }
            else{
                if(ml == LLONG_MAX && x >= -1 && x<=v[0]){
                    ml = v[0];
                    cur = -1;
                }
                if(x >= cur && x <= ml){
                    cout << 1;
                    cur = x;
                }
                else{
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
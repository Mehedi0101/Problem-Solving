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
        set<pair<ll,ll>> s;
        ll sz = 0;
        bool two = false;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x <= i) s.insert({x,i});
            else s.insert({i,x});

            if(s.size() > sz){
                sz++;
            }
            else{
                two = true;
            }
        }
        two ? cout << 2 << endl : cout << 3 << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n,m,q;
        cin >> n >> m >> q;
        set<ll> t;
        for(ll i=1; i<=m; i++){
            ll p;
            cin >> p;
            t.insert(p);
        }
        while(q--){
            ll i;
            cin >> i;
            auto it = t.upper_bound(i);
            if(it != t.end() && it != t.begin()){
                auto nt = t.lower_bound(i);
                auto pt = --t.lower_bound(i);
                cout << (*nt-*pt)/2 << '\n';
            }
            else{
                ll ep, ti;
                if(i < *t.begin()){
                    ep = 1;
                    ti = *t.begin();
                }
                else{
                    ep = n;
                    ti = *t.rbegin();
                }
                cout << abs(ti-ep) << '\n';
            }
        }
    }
    return 0;
}
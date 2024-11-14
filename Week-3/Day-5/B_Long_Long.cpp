#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, sum = 0, l = -1, r = -1;
        cin >> n;
        vector<ll> v;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            if(x != 0){
                v.push_back(x);
                if(x < 0){
                    if(l == -1) l = v.size()-1;
                    r = v.size()-1;
                }
                sum += abs(x);
            }
        }
        if(l == -1 && r == -1) cout << sum << " " << 0 << '\n';
        else{
            ll op = 0;
            for(ll i=l+1; i<r; i++){
                if(v[i] > 0 && v[i-1] < 0) op++;
            }
            cout << sum << " " << op+1 << '\n';
        }
    }
    return 0;
}
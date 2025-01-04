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
        ll n,l,r;
        cin >> n >> l >> r;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());
        ll ans = 0;
        for(ll i=0; i<n; i++){
            ll tmn = l-v[i];
            ll tmx = r-v[i];
            auto a = lower_bound(v.begin()+i+1,v.end(),tmn);
            auto b = upper_bound(v.begin()+i+1,v.end(),tmx);
            ans += (b-a);
        }
        cout << ans << endl;
    }
    return 0;
}
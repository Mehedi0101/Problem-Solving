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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];

        auto ok = [&](ll m){
            ll cnt = 0;
            for(ll x:v){
                cnt += max(0LL,m-x);
                if(cnt > k) return false;
            }
            return true;
        };

        ll l=1, r=2e9, mid, ans = 1;
        while(l<=r){
            mid = l+(r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
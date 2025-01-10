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
        ll hp, n, sum = 0;
        cin >> hp >> n;
        vector<ll> a(n), c(n);
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            sum+=a[i];
        }
        for(ll i=0; i<n; i++) cin >> c[i];

        auto ok = [&](ll m){
            ll dmg = sum;
            for(ll i=0; i<n; i++){
                dmg += ((m-1)/c[i])*a[i];
                if(dmg >= hp) return true;
            }
            return false;
        };

        ll l=1, r=(2e5)*(2e5), mid, ans=-1;
        while(l<=r){
            mid = l+(r-l)/2;
            if(ok(mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
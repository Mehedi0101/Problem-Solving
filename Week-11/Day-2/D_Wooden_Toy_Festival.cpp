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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.begin(),v.end());

        auto ok = [&](ll sec){
            ll cnt = 1;
            ll l=0;
            for(ll r=0; r<n; r++){
                if(v[r]-v[l] > 2*sec){
                    l = r;
                    cnt++;
                    if(cnt > 3) return false;
                }
            }
            return true;
        };

        ll l = 0, r = 1e9, mid, ans = -1;
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
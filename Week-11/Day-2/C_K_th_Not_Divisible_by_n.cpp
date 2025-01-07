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

        auto ok = [&](ll m){
            ll x = m/n;
            if(m-x >= k) return true;
            else return false;
        };

        ll l=1, r=2e9, mid, ans = -1;
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
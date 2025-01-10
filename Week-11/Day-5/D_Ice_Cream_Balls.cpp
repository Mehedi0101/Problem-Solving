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
        ll x;
        cin >> x;

        auto ok = [&](ll m){
            ll cnt = m*(m-1)/2;
            return cnt <= x;
        };

        ll l=2, r=1e10, mid, ans = 2;
        while(l<=r){
            mid = l+(r-l)/2;
            if(ok(mid)){
                ans = mid+(x-mid*(mid-1)/2);
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
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
        ll ps = k*(k-1)/2;
        ll cmp = ((k+n-1)*(k+n)/2) - ps;
        auto ok = [&](ll m){
            ll x = (m*(m+1)/2) - (k*(k-1)/2);
            return x;
        };
        ll l=k, r=n+k-1, mid, p = k;
        while(l<=r){
            mid = l+(r-l)/2;
            ll x = ok(mid);
            if(x <= cmp/2){
                p = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        ll ans1, ans2;
        ans1 = abs(cmp-2*(p*(p+1)/2-ps));
        ans2 = abs(cmp-2*((p+1)*(p+2)/2-ps));
        cout << min(ans1,ans2) << endl;
    }
    return 0;
}
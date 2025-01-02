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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> ps(n+1,0);
        for(ll i=0; i<n; i++) cin >> v[i];
        sort(v.rbegin(),v.rend());
        for(ll i=1; i<=n; i++){
            ps[i] = ps[i-1]+v[i-1];
        }
        while(q--){
            ll x;
            cin >> x;
            ll ans = -1, l = 0, r = n;
            while(l<=r){
                ll mid = l+(r-l)/2;
                // ll mid = (l+r)/2;
                if(ps[mid] >= x){
                    ans = mid;
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
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
    for(ll k=1;;k++){
        ll n,q;
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        vector<ll> v;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cout << "CASE# " << k << ":" << endl;
        while(q--){
            ll x;
            cin >> x;
            ll ans = -1, l = 0, r = n-1;
            while(l <= r){
                ll mid = l+(r-l)/2;
                if(v[mid] == x){
                    ans = mid+1;
                    r = mid-1;
                }
                else if(v[mid] > x) r = mid-1;
                else l = mid+1;
            }
            if(ans == -1) cout << x << " not found" << endl;
            else cout << x << " found at " << ans << endl;
        }
    }
    return 0;
}
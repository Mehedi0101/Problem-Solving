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

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    while(k--){
        ll x;
        cin >> x;
        ll ans = n+1;
        ll l=0, r=n-1;
        while(l<=r){
            ll mid = (l+r)/2;
            if(v[mid] >= x){
                ans = mid+1;
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
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

    ll n;
    cin >> n;
    vector<ll> ps(n+1,0);
    for(ll i=1; i<=n; i++){
        ll x;
        cin >> x;
        ps[i] = ps[i-1]+x;
    }
    ll q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        ll l=0, r=n, ans = 0;
        while(l<=r){
            ll mid = l+(r-l)/2;
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
    return 0;
}
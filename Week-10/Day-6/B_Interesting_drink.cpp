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
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    ll q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        ll l=0, r=n-1, ans = 0;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(v[mid] <= x){
                ans = mid+1;
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
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
        ll n,q,mx=0;
        cin >> n >> q;
        vector<ll> v(n);
        vector<ll> ps(n+1,0), ans;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            mx = max(mx,x);
            v[i] = mx;
            ps[i+1] = ps[i]+x;
        }
        while(q--){
            ll x;
            cin >> x;
            ll l=0, r=n-1, p = 0;
            while(l<=r){
                ll mid = l+(r-l)/2;
                if(v[mid] > x){
                    r = mid-1;
                }
                else{
                    p = mid+1;
                    l = mid+1;
                }
            }
            ans.push_back(ps[p]);
        }
        for(ll x:ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
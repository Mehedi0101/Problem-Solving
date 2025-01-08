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

    ll k,n;
    cin >> k >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];

    auto ok = [&](ll m){
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            cnt += min(m,v[i]);
            if(cnt >= m*k) return true;
        }
        return false;
    };

    ll l=1, r=(50*1e9)/2, mid, ans = -1;
    while(l<=r){
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

class cmp{
    public:
    bool operator()(pl a, pl b){
        return a.first+a.second > b.first+b.second;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    auto ok = [&](ll t){
        ll count = 0;
        for(ll i=0; i<n; i++){
            count += t/v[i];
            if(count >= k) return true;
        }
        return false;
    };

    ll l=1, r=1e18, mid, ans = -1;
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
    return 0;
}
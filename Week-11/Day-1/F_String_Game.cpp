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

    string p,t;
    cin >> p >> t;
    ll n = p.size(), m = t.size();
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
        v[i]--;
    }
    ll l=0, r=n-1, ans = -1, mid;
    auto ok = [&](ll k){
        vector<bool> bad(n,false);
        for(ll i=0; i<=k; i++){
            bad[v[i]] = true;
        }
        ll j = 0;
        for(ll i=0; i<n; i++){
            if(!bad[i] && p[i] == t[j]) j++;
            if(j == m) return true;
        }
        return false;
    };
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
    cout << ans+1 << endl;
    return 0;
}
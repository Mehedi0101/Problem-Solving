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
    set<ll> st;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        st.insert(x);
    }

    auto ok = [&](ll m){
        ll cnt = 1;
        ll start = *st.begin();
        while(1){
            auto x = st.lower_bound(start+m);
            if(x != st.end()){
                start = *x;
                cnt++;
                if(cnt >= k) return true;
            }
            else{
                return false;
            }
        }
    };

    ll l=0, r=1e9, mid, ans = 0;
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
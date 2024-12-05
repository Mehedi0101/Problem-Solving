#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        set<ll> st;
        bool b = false;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            if(v[i] > 0) b = true;
            if(b && i != n-1){
                if(v[i] == 0) st.insert(i);
            }
        }
        ll ans =  0;
        for(ll i=0; i<n-1; i++){
            auto it = st.begin();
            while(!st.empty() && *it > i && v[i] > 0){
                ans++;
                v[*it]++;
                st.erase(*it);
                it = st.begin();
                v[i]--;
            }
            while(!st.empty() && *it<i){
                st.erase(*it);
                it = st.begin();
            }
            ans += v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}
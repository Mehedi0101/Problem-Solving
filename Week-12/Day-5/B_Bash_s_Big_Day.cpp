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
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        set<ll> st;
        for(ll j=2; j*j<=v[i]; j++){
            while(v[i]%j == 0){
                st.insert(j);
                v[i] /= j;
            }
        }
        if(v[i] > 1) st.insert(v[i]);
        for(ll x:st) mp[x]++;
    }
    ll ans = 1;
    for(auto [key,val]:mp) ans = max(ans,val);
    cout << ans << endl;
    return 0;
}
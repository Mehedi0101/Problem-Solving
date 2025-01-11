#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool cmp(pl a, pl b){
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n, k;
        cin >> n >> k;
        vector<pl> v;
        vector<ll> v2(n),ans(n);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            v.push_back({x,i});
        }
        for(ll i=0; i<n; i++) cin >> v2[i];
        sort(v.begin(),v.end(),cmp);
        sort(v2.begin(),v2.end());
        for(ll i=0; i<n; i++){
            ans[v[i].second] = v2[i];
        }
        for(ll x:ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
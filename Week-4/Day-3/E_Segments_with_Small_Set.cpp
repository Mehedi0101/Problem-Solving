#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll i=0, j=0, ans=0;
    map<ll,ll> mp;
    while(i<n && j<n){
        mp[v[j]]++;
        if(mp.size() <= k){
            ans += j-i+1;
            j++;
        }
        else{
            mp[v[i]]--;
            if(mp[v[i]] == 0) mp.erase(v[i]);
            i++;
            mp[v[j]]--;
            if(mp[v[j]] == 0) mp.erase(v[j]);
        }
    }
    cout << ans << '\n';
    return 0;
}
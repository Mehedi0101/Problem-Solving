#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<string,ll> a, pair<string,ll> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<string,ll> mp;
    for(ll i=1; i<=n; i++){
        string s;
        cin >> s;
        mp[s] = i;
    }
    vector<pair<string,ll>> v;
    for(auto it=mp.begin(); it != mp.end(); it++){
        v.push_back({it->first,it->second});
    }
    sort(v.begin(),v.end(),cmp);
    string ans = "";
    for(auto [name,pos]:v){
        ll n = name.size();
        string str = name.substr(n-2,2);
        ans += str;
    }
    cout << ans << '\n';
    return 0;
}
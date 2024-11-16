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
        vector<vector<ll>> v(n, vector<ll> (n-1));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n-1; j++){
                cin >> v[i][j];
            }
        }
        vector<pair<ll,ll>> pi;
        ll j = 0, nxt = -1;
        while(j<n-1){
            set<ll> s;
            for(ll i=0; i<n; i++){
                s.insert(v[i][j]);
            }
            pi.push_back({*s.begin(),*(++s.begin())});
            j++;
        }
        vector<ll> ans;
        for(ll i=0; i<n-1; i++){
            if(i == n-2){
                if(pi[i].first == pi[i-1].first || pi[i].first == pi[i-1].second){
                    ans.push_back(pi[i].first);
                    ans.push_back(pi[i].second);
                }
                else{
                    ans.push_back(pi[i].second);
                    ans.push_back(pi[i].first);
                }
            }
            else{
                if(pi[i].first == pi[i+1].first || pi[i].first == pi[i+1].second){
                    ans.push_back(pi[i].second);
                }
                else{
                    ans.push_back(pi[i].first);
                }
            }
        }
        for(ll x:ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
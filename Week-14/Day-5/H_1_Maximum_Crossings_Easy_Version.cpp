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

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        vector<pl> v;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            v.push_back({i,x});
        }
        ll ans = 0;
        for(ll i=0; i<n; i++){
            for(ll j=i+1; j<n; j++){
                if(v[i].first >= v[j].first && v[i].second <= v[j].second) ans++;
                else if(v[i].first <= v[j].first && v[i].second >= v[j].second) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
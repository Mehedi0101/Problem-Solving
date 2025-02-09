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
        vector<ll> v(n);
        for(ll i = 0; i < n; i++){
            cin >> v[i];
        }
        map<ll, ll> mp;
        for(ll i = 0; i < n; i++){
            mp[v[i] - i]++;
        }
        ll cnt = 0;
        for(auto x: mp){
            cnt += ((x.second * (x.second - 1)) / 2);
        }

        cout << cnt << endl;
    }
    return 0;
}
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
        map<ll,ll> mp;
        while(n--){
            ll x;
            cin >> x;
            if(x != 0) mp[x]++;
        }
        mp.size() <= 1 ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }
    return 0;
}
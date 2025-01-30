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
    map<ll,ll> mp;
    while(n--){
        ll l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll x = 0, ans = 0;
    for(auto [key,val]:mp){
        x += val;
        ans = max(ans,x);
    }
    cout << ans << endl;
    return 0;
}
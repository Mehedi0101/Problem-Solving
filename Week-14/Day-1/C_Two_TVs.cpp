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
    if(a.first == b.first){
        return a.second < b.second;
    }
    else return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll x = 0;
    bool ans = true;
    for(auto [key,val]:mp){
        x += val;
        if(x > 2){
            ans = false;
            break;
        }
    }
    ans ? yes : no;
    return 0;
}
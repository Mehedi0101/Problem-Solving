#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<char,queue<ll>> mp;
    for(ll i=0; i<n; i++){
        mp[s[i]].push(i);
    }
    vector<ll> rev;
    ll j = 0;
    for(ll i=n-1; i>=0; i--){
        ll x = mp[s[i]].front();
        rev.push_back(x);
        mp[s[i]].pop();
    }
    
    pbds<ll> p;
    ll ans = 0;
    for(ll i=n-1; i>=0; i--){
        ans += p.order_of_key(rev[i]);
        p.insert(rev[i]);
    } 
    cout << ans << endl;
    return 0;
}
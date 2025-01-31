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

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n),ans;
    for(ll i=0; i<n; i++) cin >> v[i];
    pbds<pl> p;
    ll i=0, j=0;
    while(j<n){
        p.insert({v[j],j});
        if(j-i+1 == k){
            ans.push_back(p.find_by_order((k-1)/2)->first);
            p.erase({v[i],i});
            i++;
        }
        j++;
    }
    for(ll x:ans) cout << x << " ";
    cout << endl;
    return 0;
}
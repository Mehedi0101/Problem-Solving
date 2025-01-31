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

    ll T;
    cin >> T;
    vector<ll> ans;
    while(T--){
        cin.ignore();
        ll n;
        cin >> n;
        pbds<pl> a;
        vector<ll> v;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            a.insert({x,i});
            v.push_back(x);
        }
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            cnt += a.order_of_key({v[i],i+1});
            a.erase({v[i],i+1});
        }
        ans.push_back(cnt);
    }
    for(ll x:ans) cout << x << endl;
    return 0;
}
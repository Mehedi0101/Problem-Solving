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

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    pbds<ll> a;
    vector<ll> ans(m);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        a.insert(x);
    }
    for(ll i=0; i<m; i++){
        ll x;
        cin >> x;
        ans[i] = a.order_of_key(x+1);
    }
    for(ll x:ans) cout << x << " ";
    cout << endl;
    return 0;
}
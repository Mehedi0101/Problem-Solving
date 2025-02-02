#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int
#define pl pair<long long, long long>
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
    while(T--){
        ll n;
        cin >> n;
        vector<pl> v;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            v.push_back({x, -i});
        }
        sort(v.begin(), v.end());

        pbds<pl> p;
        ll ans = 0;
        for(pl x : v){
            ll idx = -x.second;
            ans += p.size() - p.order_of_key({idx, 0});
            p.insert({idx, 0});
        }
        cout << ans << endl;
    }
    return 0;
}
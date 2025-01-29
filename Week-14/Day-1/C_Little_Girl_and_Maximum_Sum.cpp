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

    ll n,q;
    cin >> n >> q;
    vector<ll> v(n), add(n+2), ps(n+2,0);
    for(ll i=0; i<n; i++) cin >> v[i];
    while(q--){
        ll l,r;
        cin >> l >> r;
        add[l] += 1;
        add[r+1] -= 1;
    }
    for(ll i=1; i<=n; i++){
        ps[i] = ps[i-1]+add[i];
    }
    sort(v.rbegin(),v.rend());
    sort(ps.rbegin(),ps.rend());
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans += v[i]*ps[i];
    }
    cout << ans << endl;
    return 0;
}
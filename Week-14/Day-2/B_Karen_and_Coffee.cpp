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

    ll n,k,q;
    cin >> n >> k >> q;
    ll M = 200002;
    vector<ll> ps(M), qs(M), ans(M);
    for(ll i=0; i<n; i++){
        ll l,r;
        cin >> l >> r;
        ps[l]++;
        ps[r+1]--;
    }
    for(ll i=1; i<M; i++) qs[i] = qs[i-1]+ps[i];
    for(ll i=1; i<M; i++) {
        if(qs[i] >= k) ans[i] = ans[i-1]+1;
        else ans[i] = ans[i-1];
    }
    while(q--){
        ll l,r;
        cin >> l >> r;
        cout << ans[r]-ans[l-1] << endl;
    }
    return 0;
}
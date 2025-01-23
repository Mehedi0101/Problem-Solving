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

    ll T;
    cin >> T;
    while(T--){
        ll n,m,k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<m; i++) cin >> b[i];
        ll ans = 0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                if(a[i]+b[j] <= k) ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
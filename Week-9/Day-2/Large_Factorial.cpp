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
        ll n;
        cin >> n;
        ll ans = 1;
        ll x = 1e9+7;
        for(ll i=2; i<=n; i++){
            ans = ((i%x)*ans)%x;
        }
        cout << ans << endl;
    }
    return 0;
}
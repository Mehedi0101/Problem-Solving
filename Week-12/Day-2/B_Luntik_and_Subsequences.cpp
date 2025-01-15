#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll z = 0, o = 0;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x == 0) z++;
            else if(x == 1) o++;
        }
        ll ans = o*(pow(2,z));
        cout << ans << endl;
    }
    return 0;
}
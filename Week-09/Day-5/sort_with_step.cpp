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
        ll n,k;
        cin >> n >> k;
        ll c = 0;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            if(x%k != i%k) c++;
        }
        if(c == 0) cout << 0 << endl;
        else if(c == 2) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
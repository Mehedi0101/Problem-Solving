#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
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
        ll n,k;
        cin >> n >> k;
        ll j=1;
        ll z = 0;
        while(1){
            ll x = ceil(n/2.0);
            if(k <= x){
                break;
            }
            else{
                z += x;
                k -= x;
                n -= x;
                j *= 2;
            }
        }
        ll ans;
        if(j == 1){
            ans = k*2-1;
        }
        else{
            ans = j + (k - 1) * (j * 2);
        }
        cout << ans << endl;
    }
    return 0;
}
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
        vector<ll> a(n);
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }

        ll ans = 0, mx = 0;
        for(ll i = 1; i < n; i++){
            if(a[i] < a[i - 1]){
                ans += a[i - 1] - a[i];
                mx = max(mx, a[i - 1] - a[i]);
                a[i] = a[i - 1];
            }
        }
        ans += mx;
        cout << ans << endl;
    }
    return 0;
}
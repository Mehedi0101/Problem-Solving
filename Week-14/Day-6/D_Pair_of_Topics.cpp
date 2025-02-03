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

    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n);

    for(ll i = 0; i < n; i++)
        cin >> a[i];
    
    for(ll i = 0; i < n; i++)
        cin >> b[i];
    
    for(ll i = 0; i < n; i++)
        c[i] = b[i] - a[i];
    
    sort(c.begin(), c.end());
    
    ll ans = 0;
    
    for(ll i = 0; i < n; i++){
        auto it = lower_bound(c.begin() + i + 1, c.end(), -c[i]);
        ll id = it - c.begin();
        ans += id - (i + 1);
    }
    
    cout << ans << endl;
    return 0;
}

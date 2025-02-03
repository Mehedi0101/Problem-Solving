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
    vector<ll> v(n);
    vector<ll> cnt(1e6+5, 0);
    
    for(ll i = 0; i < n; i++)
        cin >> v[i];
    
    ll ans = 0;
    
    for(ll i = 0; i < n - 1; i++){
        for(ll j = i + 1; j < n; j++){
            ll tmp = v[i] + v[j];
            cnt[tmp]++;
            ans = max(ans, cnt[tmp]);
        }
    }
    
    cout << ans << endl;
    return 0;
}
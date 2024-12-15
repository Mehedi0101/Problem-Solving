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
        ll n, mx = 0;
        cin >> n;
        vector<ll> a(n), b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];
        for(ll i=0; i<n; i++) mx = max(mx,a[i]-b[i]);
        for(ll i=0; i<n; i++){
            ll z = 0;
            a[i] = max(z,a[i]-mx);
        }
        if(a == b) yes;
        else no;
    }
    return 0;
}
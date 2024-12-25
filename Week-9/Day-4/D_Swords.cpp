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

    ll n, mx = 0;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
        mx = max(mx,v[i]);
    }
    ll sum = 0, gcd = 0;
    for(ll i=0; i<n; i++){
        ll x = mx-v[i];
        sum += x;
        gcd = __gcd(gcd,x);
    }
    cout << sum/gcd << " " << gcd << endl;
    return 0;
}
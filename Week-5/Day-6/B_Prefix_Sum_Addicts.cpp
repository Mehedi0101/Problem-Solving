#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll> v(k);
        for(ll i=0; i<k; i++){
            cin >> v[i];
        }
        vector<ll> a(n);
        ll x = n-k+1;
        ll sum = 0;
        for(ll i=0; i<n-k; i++){
            a[i] = floor((v[0]-sum)*1.0/x*1.0);
            sum += a[i];
            x--;
        }
        for(ll i=n-k; i<n; i++){
            a[i] = v[i-(n-k)]-sum;
            sum += a[i];
        }
        vector<ll> b(a);
        sort(b.begin(),b.end());
        a == b ? cout << "Yes" << '\n' : cout << "No" << '\n';
    }
    return 0;
}
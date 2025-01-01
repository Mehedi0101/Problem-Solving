#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check_kth(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> b(n-1);
        for(ll i=0; i<n-1; i++){
            cin >> b[i];
        }
        vector<ll> a(n,0);
        for(ll i=0; i<n-1; i++){
            ll m = __lg(b[i]);
            for(int k=m; k>=0; k--){
                if(check_kth(b[i],k) && !check_kth(a[i],k)) a[i] += (1LL<<k);
                if(check_kth(b[i],k) && !check_kth(a[i+1],k)) a[i+1] += (1LL<<k);
            }
        }
        bool ans = true;
        for(ll i=1; i<n; i++){
            if((a[i] & a[i-1]) != b[i-1]){
                ans = false;
                break;
            }
        }
        if(!ans) cout << -1 << '\n';
        else{
            for(ll x:a) cout << x << " ";
            cout << '\n';
        }
    }
    return 0;
}
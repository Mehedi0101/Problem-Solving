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
        ll n,m,sum=0;
        cin >> n >> m;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        m -= v[0]+1;
        for(ll i=0; i<n-1; i++) sum += v[i]+1;
        if(sum <= m) yes;
        else no;
    }
    return 0;
}
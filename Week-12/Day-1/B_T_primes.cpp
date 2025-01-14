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
    ll m = 1e6+1;
    vector<bool> v(m,true);
    v[1] = false;
    for(ll i=2; i*i<=m; i++){
        if(v[i]){
            for(ll j=i+i; j<=m; j+=i) v[j] = false;
        }
    }
    while(T--){
        ll x;
        cin >> x;
        ll y = sqrt(x);
        if(y*y != x) no;
        else{
            if(v[y]) yes;
            else no;
        }
    }
    return 0;
}
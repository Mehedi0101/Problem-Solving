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
    vector<ll> v(m,2);
    v[1] = 1;
    for(ll i=2; i <= m/2+1; i++){
        for(ll j=i+i; j<=m; j+=i){
            v[j]++;
        }
    }
    while(T--){
        ll n;
        cin >> n;
        cout << v[n] << endl;
    }
    return 0;
}
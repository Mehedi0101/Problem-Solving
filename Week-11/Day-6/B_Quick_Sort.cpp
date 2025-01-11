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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        ll cnt = 0;
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        ll j = 1;
        for(ll i=0; i<n; i++){
            if(v[i] == j){
                j++;
                cnt++;
            }
        }
        cout << ceil((n-cnt)*1.0/k) << endl;
    }
    return 0;
}
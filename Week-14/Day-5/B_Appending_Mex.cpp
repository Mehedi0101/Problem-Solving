#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
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
    ll mx = -1;
    ll flag = 0;

    for(ll i = 0; i < n; i++){
        ll x;
        cin >> x;
        if(x > mx + 1){
            cout << i + 1;
            flag = 1;
            break;
        }
        mx = max(mx, x);
    }
    if(flag == 0){
        cout << -1;
    }
    return 0;
}
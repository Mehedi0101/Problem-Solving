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
        ll a,b;
        cin >> a >> b;
        ll x = __gcd(a,b);
        while(x > 1){
            b /= x;
            x = __gcd(a,b);
        }
        if(b > 1) No;
        else Yes;
    }
    return 0;
}
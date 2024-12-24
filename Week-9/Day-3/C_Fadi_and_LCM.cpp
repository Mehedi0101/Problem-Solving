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

    ll x;
    cin >> x;
    for(ll i=sqrt(x)+1; i>=1; i--){
        if(x%i == 0){
            ll a = x/i, b = i;
            ll lcm = (a*b)/__gcd(a,b);
            if(lcm == x){
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}
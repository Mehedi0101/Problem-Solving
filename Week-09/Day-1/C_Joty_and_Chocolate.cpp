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

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll lcm = a/__gcd(a,b)*b;
    ll x = n/lcm;
    ll y = (n/a)-x;
    ll z = (n/b)-x;
    cout << (max(p,q)*x)+(y*p)+(z*q) << endl;
    return 0;
}
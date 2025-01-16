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

    ll n;
    cin >> n;
    ll x;
    if(n%2 == 0) x = n/2;
    else x = (n-1)/2;
    cout << x << endl;
    for(ll i=1; i<x; i++) cout << 2 << " ";
    if(n%2 == 0) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}
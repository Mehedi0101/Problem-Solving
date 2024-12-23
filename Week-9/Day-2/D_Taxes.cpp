#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool isPrime(ll x){
    if(x == 1) return false;
    for(ll i=2; i*i <= x; i++){
        if(x%i == 0) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    if(isPrime(n)) cout << 1 << endl;
    else if(n%2 == 0 || (isPrime(n-2))) cout << 2 << endl;
    else cout << 3 << endl;
    return 0;
}
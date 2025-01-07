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
        ll n, sum = 0, one = 0;
        cin >> n;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            sum += x;
            if(x == 1) one++;
        }
        ll k = 0;
        k += (one*2);
        k += (n-one);
        if(k > sum || n == 1) no;
        else yes;
    }
    return 0;
}
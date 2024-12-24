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

    ll l,r;
    cin >> l >> r;
    ll j = l;
    yes;
    for(ll i=0; i<(r-l+1)/2; i++){
        cout << j++ << " " << j++ << endl;
    }
    return 0;
}
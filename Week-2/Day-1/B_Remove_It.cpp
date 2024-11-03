#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x;
    cin >> n >> x;
    vector<ll> v;
    while(n--){
        ll p;
        cin >> p;
        if(p!=x) v.push_back(p);
    }
    for(ll i:v){
        cout << i << " ";
    }
    cout << '\n';
    return 0;
}
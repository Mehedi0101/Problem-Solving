#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll x;
        cin >> x;
        ll a = 1LL<<(__lg(x));
        if(a+1 == x){
            cout << x-2 << '\n';
        } 
        else{
            cout << a-1 << '\n';
        }
    }
    return 0;
}
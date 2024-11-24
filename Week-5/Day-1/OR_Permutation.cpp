#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 3) cout << "1 3 2" << '\n';
        else{
            cout << "1 2 ";
            for(ll i=n; i>2; i--) cout << i << " ";
            cout << '\n';
        }
    }
    return 0;
}
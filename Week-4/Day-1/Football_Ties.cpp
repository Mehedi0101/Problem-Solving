#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        cout << max(a%3,b%3) << '\n';
    }
    return 0;
}
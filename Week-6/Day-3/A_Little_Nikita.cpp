#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        if(n<m){
            cout << "No" << '\n';
        }
        else{
            if(n%2 == m%2) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }
    return 0;
}
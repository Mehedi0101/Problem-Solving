#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b;
    cin >> a >> b;
    a-b >= 18 ? cout << "RCB" << '\n' : cout << "CSK" << '\n';
    return 0;
}
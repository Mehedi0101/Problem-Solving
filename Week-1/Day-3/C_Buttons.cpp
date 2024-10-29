#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b;
    cin >> a >> b;
    cout << max({a+a-1,a+b,b+b-1}) << '\n';
    return 0;
}
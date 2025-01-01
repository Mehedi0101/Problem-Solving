#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin >> a >> b;
    ll c = 0;
    for(ll i=0; i<a.size(); i++){
        if(a[i] != b[i]) c++;
    }
    cout << c << '\n';
    return 0;
}
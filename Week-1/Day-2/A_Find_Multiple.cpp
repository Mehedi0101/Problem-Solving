#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,c;
    cin >> a >> b >> c;
    ll mul = -1;
    for(ll i=1;;i++){
        if(c*i >= a && c*i <= b){
            mul = c*i;
            break;
        }
        else if(c*i > b){
            break;
        }
    }
    cout << mul << "\n";
}
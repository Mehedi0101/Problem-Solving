#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b;
    cin >> a >> b;
    if(b-a < 0){
        cout << 0 << endl;
    }
    else{
        cout << b-a+1 << endl;
    }
    return 0;
}
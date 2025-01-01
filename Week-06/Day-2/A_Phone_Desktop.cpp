#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll s = 0;
        while(a > 0 || b > 0){
            if(b >= 2){
                b-=2;
                a-=7;
            }
            else if(b == 1){
                b--;
                a-=11;
            }
            else{
                a-=15;
            }
            s++;
        }
        cout << s << '\n';
    }
}
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
        ll first_black = 0, last_black = 0;
        for(ll i=1; i<=n; i++){
            char c;
            cin >> c;
            if(c == 'B'){
                if(first_black == 0){
                    first_black = i;
                    last_black = i;
                }
                else{
                    last_black = i;
                }
            }
        }
        cout << last_black-first_black+1 << endl;
    }
    return 0;
}
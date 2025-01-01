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
        if(n%2 != 0) cout << "NO" << '\n';
        else{
            cout << "YES" << '\n';
            bool b = true;
            for(ll i=0; i<n/2; i++){
                if(b){
                    cout << "AA";
                    b = false;
                }
                else{
                    cout << "BB";
                    b = true;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}
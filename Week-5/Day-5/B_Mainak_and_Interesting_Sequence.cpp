#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        if(n>m || (n%2==0 && m%2!=0)){
            cout << "No" << '\n';
        }
        else{
            cout << "Yes" << '\n';
            if(n%2 != 0){
                for(ll i=0; i<n-1; i++){
                    cout << 1 << " ";
                }
                cout << m-(n-1) << '\n';
            }
            else{
                for(ll i=0; i<n-2; i++){
                    cout << 1 << " ";
                }
                cout << (m-(n-2))/2 << " " << (m-(n-2))/2 << '\n';
            }
        }
    }
    return 0;
}
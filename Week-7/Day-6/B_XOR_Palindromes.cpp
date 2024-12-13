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
        string str;
        cin >> str;
        ll cnt = 0;
        for(ll i=0; i<n/2; i++){
            if(str[i] != str[n-1-i]) cnt++;
        }
        for(ll i=0; i<=n; i++){
            if(i>=cnt && i<=n-cnt){
                if(n%2 != 0){
                    cout << 1;
                }
                else if((i-cnt)%2 == 0){
                    cout << 1;
                }
                else cout << 0;
            }
            else cout << 0;
        }
        cout << '\n';
    }
    return 0;
}
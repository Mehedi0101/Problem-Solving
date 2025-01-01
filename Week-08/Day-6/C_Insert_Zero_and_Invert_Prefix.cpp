#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        if(v[n-1] == 1) no;
        else{
            yes;
            ll cnt = 0;
            for(ll i = n-1; i >= 0; i--){
                if(i != 0 && v[i] == 1 && v[i-1] == 1){
                    cout << 0 << " ";
                    cnt++;
                }
                else if(i != 0 && v[i] == 1 && v[i-1] == 0){
                    cout << cnt+1 << " ";
                    cnt = 0;
                }
                else if(i == 0 && v[i] == 1){
                    cout << cnt+1 << " ";
                }
                else{
                    cout << 0 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
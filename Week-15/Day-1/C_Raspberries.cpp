#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n, k;
        cin >> n >> k;
        ll md = 0, even = 0;
        bool div = false;

        for(ll p = 0; p < n; p++){
            ll x;
            cin >> x;
            x %= k;
            if(x){
                md = max(md, x);
            }
            else{
                div = true;
            }
            if(x == 2){
                ++even;
            }
        }

        if(div){
            cout << 0 << endl;
        }
        else if(k == 4){
            if(even >= 2){
                cout << 0 << endl;
            }
            else if(even >= 1 || md == 3){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
        else{
            cout << k - md << endl;
        }
    }
    return 0;
}
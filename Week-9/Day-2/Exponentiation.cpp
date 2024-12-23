#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

bool check_kth_bit_on_or_off(int n, int k){
    return (n>>k)&1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll a,b;
        cin >> a >> b;
        ll ans = 1;
        ll x = 1e9+7;
        for(int k=0; k<32; k++){
            if(check_kth_bit_on_or_off(b,k)){
                ans = (ans*a)%x;
            }
            a = (a*a)%x;
        }
        cout << ans << endl;
    }
    return 0;
}
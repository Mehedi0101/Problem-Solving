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

    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i=6; i<=n; i++){
        set<ll> st;
        ll x = i;
        for(ll j=2; j*j<=x; j++){
            if(x%j == 0){
                st.insert(j);
                while(x%j == 0) x /= j;
            }
        }
        if(x > 1) st.insert(x);
        if(st.size() == 2) ans++;
    }
    cout << ans << endl;
    return 0;
}
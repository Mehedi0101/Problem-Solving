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
        ll n, mx = LLONG_MIN;
        cin >> n;
        vector<ll> v(n);
        set<ll> st,st2;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            st.insert(x);
        }
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        ll gcd = 0;
        for(auto i=st.begin(); i != st.end(); i++){
            ll x = *st.rbegin()-*i;
            st2.insert(x);
            gcd = __gcd(gcd,x);
        }
        ll ans = 0;
        for(ll x:st2) ans += x/gcd;
        ll k = 1;
        while(true){
            if(st.find(*st.rbegin()-k*gcd) == st.end()){
                ans += k;
                break;
            }
            k++;
        }
        cout << ans << endl;
    }
    return 0;
}
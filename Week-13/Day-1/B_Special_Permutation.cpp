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
        ll n,a,b;
        cin >> n >> a >> b;
        set<ll> st;
        for(ll i=1; i<=n; i++) st.insert(i);
        bool ans = true;
        vector<ll> v(n);
        v[0] = a;
        st.erase(a);
        for(ll i=1; i<n/2; i++){
            auto it = --st.end();
            ll x = *it;
            if(x == b){
                it--;
                x = *it;
            }
            if(x < a){
                ans = false;
                break;
            }
            v[i] = x;
            st.erase(x);
        }
        if(!ans) cout << -1 << endl;
        else{
            v[n/2] = b;
            st.erase(b);
            for(ll i=n/2+1; i<n; i++){
                ll x = *st.begin();
                if(x > b){
                    ans = false;
                    break;
                }
                v[i] = x;
                st.erase(x);
            }
            if(!ans) cout << -1 << endl;
            else{
                for(ll x:v) cout << x << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
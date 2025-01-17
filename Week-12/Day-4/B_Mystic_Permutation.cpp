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
        ll n;
        cin >> n;
        vector<ll> v(n), ans(n,0);
        set<ll> st;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            st.insert(i+1);
        }
        if(n == 1){
            cout << -1 << endl;
            continue;
        }
        bool b = false;
        for(ll i=0; i<n; i++){
            auto it = st.begin();
            if(v[i] == *it){
                it++;
                if(it == st.end()){
                    *it--;
                    ans[i] = *it;
                    b = true;
                }
                else{
                    ans[i] = *it;
                }
                st.erase(it);
            }
            else{
                ans[i] = *it;
                st.erase(it);
            }
        }
        if(b) swap(ans[n-1],ans[n-2]);
        for(ll x:ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
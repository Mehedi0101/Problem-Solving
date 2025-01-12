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
        set<ll> st;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            st.insert(x);
        }
        vector<ll> v;
        for(auto it=st.begin(); it!=st.end(); it++){
            v.push_back(*it);
        }
        ll i=0, j=0, ans = 0;
        while(j<v.size()-1){
            j++;
            if(v[j]-v[i] < n){
                ans = max(ans,j-i);
            }
            else{
                i++;
                j--;
            }
        }
        cout << ans+1 << endl;
    }
    return 0;
}
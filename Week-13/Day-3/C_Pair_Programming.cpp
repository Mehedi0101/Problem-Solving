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
        cin.ignore();
        ll k,n,m;
        cin >> k >> n >> m;
        vector<ll> v1(n), v2(m), v;
        for(ll i=0; i<n; i++) cin >> v1[i];
        for(ll i=0; i<m; i++) cin >> v2[i];
        ll i=0, j=0;
        while(i<n && j<m){
            if(v1[i] <= v2[j]){
                v.push_back(v1[i]);
                i++;
            }
            else{
                v.push_back(v2[j]);
                j++;
            }
        }
        for(ll k=i; k<n; k++) v.push_back(v1[k]);
        for(ll k=j; k<m; k++) v.push_back(v2[k]);
        bool ans = true;
        for(ll i=0; i<v.size(); i++){
            if(v[i] > k){
                ans = false;
                break;
            }
            else if(v[i] == 0) k++;
        }
        if(!ans) cout << -1 << endl;
        else{
            for(ll x:v) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<vector<ll>> v(n, vector<ll> (m));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cin >> v[i][j];
            }
        }
        ll mx = 0;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                ll ans=0, k=i, l=j;
                while(k>=0 && l>=0){
                    ans+=v[k][l];
                    k--,l--;
                }
                k=i+1, l=j+1;
                while(k<n && l<m){
                    ans+=v[k][l];
                    k++,l++;
                }
                k=i+1; l=j-1;
                while(k<n && l>=0){
                    ans+=v[k][l];
                    k++,l--;
                }
                k=i-1; l=j+1;
                while(k>=0 && l<m){
                    ans+=v[k][l];
                    k--,l++;
                }
                mx = max(mx,ans);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}
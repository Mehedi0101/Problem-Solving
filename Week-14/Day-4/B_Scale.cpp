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
        ll n,k;
        cin >> n >> k;
        vector<vector<char>> v(n, vector<char> (n));
        ll m = n/k;
        vector<vector<char>> ans(m, vector<char> (m));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                cin >> v[i][j];
                if(i%k == 0 && j%k == 0) ans[i/k][j/k] = v[i][j];
            }
        }
        for(ll i=0; i<m; i++){
            for(ll j=0; j<m; j++){
                cout << ans[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
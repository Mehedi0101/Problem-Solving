#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        vector<vector<char>> v(n, vector<char> (m));
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cin >> v[i][j];
            }
        }
        for(ll p = 0; p < n; p++){
            for(ll i=n-1; i>=1; i--){
                for(ll j=0; j<m; j++){
                    if(v[i][j] == '.' && v[i-1][j] == '*') swap(v[i][j],v[i-1][j]);
                }
            }
        }
        for(ll i=0; i<n; i++){
            for(ll j=0; j<m; j++){
                cout << v[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
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
        vector<vector<char>> v(8, vector<char> (8));
        ll ans = -1;
        for(ll i=0; i<8; i++){
            ll r = 0;
            for(ll j=0; j<8; j++){
                cin >> v[i][j];
                if(v[i][j] == 'R') r++;
            }
            if(ans == -1 && r == 8) ans = 1;
        }
        if(ans == 1) cout << 'R' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}
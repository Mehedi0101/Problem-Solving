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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin >> v[i];
        bool ans = true;
        ll op = 0;
        if(v[n-1] < n-1) cout << -1 << endl;
        else{
            for(ll i=n-2; i>=0; i--){
                while(v[i] >= v[i+1]){
                    v[i] /= 2;
                    op++;
                }
                if(v[i] == 0 && i != 0){
                    ans = false;
                    break;
                }
            }
            ans ? cout << op << endl : cout << -1 << endl;
        }
    }
    return 0;
}
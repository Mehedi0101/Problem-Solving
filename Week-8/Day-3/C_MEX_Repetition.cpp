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
        ll n,q;
        cin >> n >> q;
        set<ll> s;
        for(ll i=0; i<=n; i++){
            s.insert(i);
        }
        vector<ll> v(n+1);
        for(ll i=1; i<=n; i++){
            cin >> v[i];
            s.erase(v[i]);
        }
        v[0] = *s.begin();
        ll i = 0, j = (n+1 - (q % (n+1))) % (n+1);
        if(n == 1){
            if(q%2 == 0) j = 0;
            else j = 1;
        }
        while(i<n){
            if(j == n){
                j = 0;
            }
            else{
                j++;
            }
            cout << v[j] << " ";
            i++;
        }
        cout << endl;
    }
    return 0;
}
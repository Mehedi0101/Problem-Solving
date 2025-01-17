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

    ll n;
    cin >> n;
    if(n <= 2){
        cout << 1 << endl;
        for(ll i=1; i<=n; i++) cout << 1 << " ";
        cout << endl;
    }
    else{
        unordered_map<ll,bool> mp;
        vector<bool> v(n+2,true);
        for(ll i=2; i<=n+1; i++){
            if(v[i]){
                mp[i] = true;
                for(ll j=i+i; j<=n+1; j+=i){
                    v[j] = false;
                }
            }
        }
        cout << 2 << endl;
        for(ll i=2; i<=n+1; i++){
            if(mp[i]) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
    }
    return 0;
}
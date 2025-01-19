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
        cin>>n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        map<ll,ll>mp;
        sort(v.begin(), v.end());
        if(v[0]!=v[1]) yes;
        else {
            bool ans = false;
            for(ll i = 1; i < n; i++) {
                if(v[i]%v[0]!=0) {
                    ans = true;
                    break;
                }
            }
            ans ? yes : no;
        }
    }
    return 0;
}
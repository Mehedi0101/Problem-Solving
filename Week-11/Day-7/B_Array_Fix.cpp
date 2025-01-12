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
        vector<ll> v(n),v2;
        for(ll i=0; i<n; i++) cin >> v[i];
        for(ll i=n-1; i>=0; i--){
            if(i == n-1) v2.push_back(v[i]);
            else{
                if(v2.back() < v[i] && v[i] >= 10){
                    v2.push_back(v[i]%10);
                    v2.push_back(v[i]/10);
                }
                else{
                    v2.push_back(v[i]);
                }
            }
        }
        bool ans = true;
        for(ll i=1; i<v2.size(); i++){
            if(v2[i-1] < v2[i]){
                ans = false;
                break;
            }
        }
        ans ? yes : no;
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v1,v2;
        ll cur = 0, i = n;
        while(i > 0){
            ll x;
            cin >> x;
            i--;
            if(x >= cur){
                v1.push_back(x);
                cur = x;
            }
            else{
                v2.push_back(x);
                cur = x;
                break;
            }
        }
        while(i > 0){
            ll x;
            cin >> x;
            i--;
            if(x >= cur){
                v2.push_back(x);
                cur = x;
            }
            else{
                break;
            }
        }
        while(i > 0){
            ll x;
            cin >> x;
            i--;
        }
        v2.insert(v2.end(),v1.begin(),v1.end());
        vector<ll> v3(v2);
        sort(v3.begin(),v3.end());
        if(n != v2.size()) cout << "No" << '\n';
        else{
            if(v2 == v3) cout << "Yes" << '\n';
            else cout << "No" << '\n';
        }
    }
    return 0;
}
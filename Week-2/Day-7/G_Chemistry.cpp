#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll odd = 0;
        map<char,ll> mp;
        for(char c:s){
            mp[c]++;
        }
        for(auto it=mp.begin(); it!=mp.end(); it++){
            if(it->second % 2 != 0) odd++;
        }
        ll rm = odd-k;
        if(rm > 1){
            cout << "NO" << '\n';
        }
        else if(rm == 0 || rm == 1){
            cout << "YES" << '\n';
        }
        else{
            cout << "YES" << '\n';
        }
    }
    return 0;
}
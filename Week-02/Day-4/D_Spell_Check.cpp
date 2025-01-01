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
        string s;
        cin >> s;
        bool b = true;
        if(n != 5) cout << "NO" << '\n';
        else{
            map<char,ll> mp;
            for(char c:s){
                if(c != 'T' && c != 'i' && c != 'm' && c != 'u' && c != 'r'){
                    b = false;
                    break;
                }
                else{
                    mp[c]++;
                    if(mp[c] > 1){
                        b = false;
                    }
                }
            }
            b ? cout << "YES" << '\n' : cout << "NO" << '\n';
        }
    }
    return 0;
}
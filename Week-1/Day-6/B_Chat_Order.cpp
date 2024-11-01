#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<string,ll> mp1;
    map<ll,string> mp2;
    for(ll i=1; i<=n; i++){
        string s;
        cin >> s;
        auto it = mp1.find(s);
        if(it == mp1.end()){
            mp1[s] = i;
            mp2[i] = s;
        }
        else{
            mp2.erase(mp1[s]);
            mp1[s] = i;
            mp2[i] = s;
        } 
    }
    for(auto it=mp2.rbegin(); it!=mp2.rend(); it++){
        cout << it->second << '\n';
    }
    return 0;
}
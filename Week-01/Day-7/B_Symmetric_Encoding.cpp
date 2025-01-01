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
        set<char> ch;
        for(char c:s){
            ch.insert(c);
        }
        map<char,char> mp;
        auto i=ch.begin();
        auto j=ch.rbegin();
        while(i!=ch.end()){
            mp[*i] = *j;
            i++;
            j++;
        }
        for(char c:s){
            cout << mp[c];
        }
        cout << '\n';
    }
    return 0;
}
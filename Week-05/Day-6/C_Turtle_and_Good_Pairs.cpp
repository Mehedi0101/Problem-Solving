#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<char,ll> a, pair<char,ll> b){
    return a.second > b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string str;
        cin >> str;
        map<char,ll> mp;
        for(char c:str) mp[c]++;
        ll count = 0;
        while(count < n){
            for(auto [c,cnt]:mp){
                if(cnt > 0){
                    cout << c;
                    mp[c]--;
                    count++;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
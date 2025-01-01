#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        map<char,queue<ll>> mp;
        for(ll i=0; i<str.size(); i++){
            mp[str[i]].push(i+1);
        }
        vector<ll> ans;
        auto it = mp.find(str[0]);
        while(1){
            while(!it->second.empty()){
                ll pos = it->second.front();
                ans.push_back(pos);
                it->second.pop();
            }
            if(it->first == str[str.size()-1]){
                break;
            }
            else{
                if(str[0] <= str[str.size()-1]) it++;
                else it--;
            }
        }
        cout << abs(int(str[0] - int(str[str.size()-1]))) << " " << ans.size() << '\n';
        for(ll x:ans) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
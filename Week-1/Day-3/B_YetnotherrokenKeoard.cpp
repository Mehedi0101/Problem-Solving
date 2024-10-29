#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool cmp(pair<char,int> a, pair<char,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<pair<char,int>> lc;
        stack<pair<char,int>> uc;
        for(ll i=0; i<s.size(); i++){
            if(s[i] == 'b'){
                if(!lc.empty()) lc.pop();
            }
            else if(s[i] == 'B'){
                if(!uc.empty()) uc.pop();
            }
            else if(s[i] >= 'a' && s[i] <= 'z'){
                lc.push({s[i],i});
            }
            else{
                uc.push({s[i],i});
            }
        }
        vector<pair<char,int>> ans;
        while(!lc.empty()){
            ans.push_back(lc.top());
            lc.pop();
        }
        while(!uc.empty()){
            ans.push_back(uc.top());
            uc.pop();
        }
        sort(ans.begin(),ans.end(),cmp);
        for(auto [c,i] : ans){
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
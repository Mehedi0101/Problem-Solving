#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string str;
    cin >> str;
    map<char,ll> cnt;
    for(char c:str){
        cnt[c]++;
    }
    string fp = "", lp = "", mp = "";
    ll odd = 0;
    for(auto it:cnt){
        if(it.second%2 != 0){
            odd++;
            if(odd > 1){
                break;
            }
            for(ll i=1; i<=it.second; i++){
                mp+=it.first;
            }
        }
        else{
            for(ll i=1; i<=it.second/2; i++){
                fp+=it.first;
                lp+=it.first;
            }
        }
    }
    if(odd > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        reverse(lp.begin(),lp.end());
        cout << fp << mp << lp << endl;
    }
    return 0;
}
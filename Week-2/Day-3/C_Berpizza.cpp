#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll q;
    cin >> q;
    map<ll,queue<ll>> mp1;
    map<ll,ll> mp2;
    ll cmd,i=1;
    while(q--){
        cin >> cmd;
        if(cmd == 1){
            ll m;
            cin >> m;
            mp1[m].push(i);
            mp2[i] = m;
            i++;
        }
        if(cmd == 2){
            auto it = mp2.begin();
            cout << it->first << " ";
            if(mp1[it->second].size() == 1) mp1.erase(it->second);
            else mp1[it->second].pop();
            mp2.erase(it->first);
        }
        if(cmd == 3){
            auto it1 = mp1.rbegin();
            ll f = mp1[it1->first].front();
            cout << f << " ";
            mp2.erase(f);
            if(mp1[it1->first].size() == 1){
                mp1.erase(it1->first);
            }
            else{
                mp1[it1->first].pop();
            }
        }
    }
    // for(auto it=mp1.begin(); it!=mp1.end(); it++){
    //     cout << it->first << " -> ";
    //     while(!mp1[it->first].empty()){
    //         cout << mp1[it->first].front() << " ";
    //         mp1[it->first].pop();
    //     }
    //     cout << '\n';
    // }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<string,string> handles1;
    map<string,string> handles2;
    while(n--){
        string a,b;
        cin >> a >> b;
        if(handles2[a] != ""){
            handles1[handles2[a]] = b;
            handles2[b] = handles2[a];
        }
        else{
            handles1[a] = b;
            handles2[b] = a;
        }
    }
    cout << handles1.size() << "\n";
    for(auto it : handles1){
        cout << it.first << " " << it.second << "\n";
    }
    return 0;
}
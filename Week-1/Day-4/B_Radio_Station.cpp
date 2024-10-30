#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;
    cin >> n >> q;
    map<string,string> servers;
    while(n--){
        string name,ip;
        cin >> name >> ip;
        servers[ip] = name;
    }
    while(q--){
        string cmd, ip;
        cin >> cmd >> ip;
        ip.pop_back();
        cout << cmd << " " << ip << "; #" << servers[ip] << '\n';
    }
    return 0;
}
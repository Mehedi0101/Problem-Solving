#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    map<string,ll> names;
    while(n--){
        string s;
        cin >> s;
        auto it = names.find(s);
        names[s]++;
        if(it == names.end()){
            cout << "OK" << '\n';
        }
        else{
            cout << s << names[s]-1 << '\n';
        }
    }
    return 0;
}
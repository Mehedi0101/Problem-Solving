#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    string p = "";
    for(ll i=1; i<=4-s.size(); i++){
        p+="0";
    }
    cout << p << s << '\n';
    return 0;
}
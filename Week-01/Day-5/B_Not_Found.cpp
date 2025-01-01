#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    map<char,ll> count;
    for(char c:s){
        count[c]++;
    }
    bool found = true;
    for(char i='a'; i<='z'; i++){
        if(count[i] == 0){
            found = false;
            cout << i << '\n';
            break;
        }
    }
    if(found == true) cout << "None" << '\n';
    return 0;
}
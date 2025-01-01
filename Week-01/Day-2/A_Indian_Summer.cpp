#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    set<pair<string,string>> leaves;
    while(n--){
        string a,b;
        cin >> a >> b;
        leaves.insert({a,b});
    }
    cout << leaves.size() << endl;
    return 0;
}
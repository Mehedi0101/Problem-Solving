#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        string rs,s;
        cin >> rs;
        s = rs;
        reverse(rs.begin(),rs.end());
        if(s<=rs){
            cout << s << '\n';
        }
        else{
            cout << rs << s << '\n';
        }
    }
    return 0;
}
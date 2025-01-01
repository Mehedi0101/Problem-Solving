#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        ll n = str.size();
        if(n == 2){
            if(str == "()") cout << "NO" << '\n';
            else if(str == ")(") cout << "YES\n(())\n";
            else cout << "YES\n()()\n"; 
        }
        else{
            cout << "YES\n";
            string s = "";
            for(ll i=0; i<n/2+1; i++){
                s += "()";
            }
            ll f = s.find(str);
            if(f != string::npos){
                for(ll i=0; i<n; i++){
                    cout << "(";
                }
                for(ll i=0; i<n; i++){
                    cout << ")";
                }
                cout << '\n';
            }
            else{
                for(ll i=0; i<n; i++){
                    cout << "()";
                }
                cout << '\n';
            }
        }
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string pw;
        cin >> pw;
        ll pos = -1;
        for(ll i=1; i<pw.size(); i++){
            if(pw[i-1] == pw[i]){
                pos = i;
                break;
            }
        }
        if(pos == -1){
            cout << pw;
            if(pw[pw.size()-1] == 'z'){
                cout << 'y' << '\n';
            }
            else{
                cout << char(pw[pw.size()-1]+1) << '\n';
            }
        }
        else{
            for(ll i=0; i<pos; i++){
                cout << pw[i];
            }
            if(pw[pos] == 'z') cout << 'y';
            else cout << char(pw[pos]+1);
            for(ll i=pos; i<pw.size(); i++){
                cout << pw[i];
            }
            cout << '\n';
        }
    }
    return 0;
}
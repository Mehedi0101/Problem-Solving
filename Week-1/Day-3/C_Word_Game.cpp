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
        vector<vector<string>> words(3, vector<string> (n)); 
        map<string,int> count;
        for(ll i=0; i<3; i++){
            for(ll j=0; j<n; j++){
                string s;
                cin >> s;
                words[i][j] = s;
                count[s]++;
            }
        }
        ll a = 0, b = 0, c = 0;
        for(ll i=0; i<3; i++){
            for(ll j=0; j<n; j++){
                if(count[words[i][j]] == 1){
                    if(i == 0) a+=3;
                    else if(i == 1) b+=3;
                    else c+=3;
                }
                else if(count[words[i][j]] == 2){
                    if(i == 0) a+=1;
                    else if(i == 1) b+=1;
                    else c+=1;
                }
            }
        }
        cout << a << " " << b << " " << c << '\n';
    }
    return 0;
}
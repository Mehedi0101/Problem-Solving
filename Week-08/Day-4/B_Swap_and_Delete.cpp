#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        ll z = 0, o = 0;
        for(char c:str){
            if(c == '0') z++;
            else o++;
        }
        ll ans = str.size();
        for(char c:str){
            if(c == '0' && o > 0){
                o--;
                ans--;
            }
            else if(c == '1' && z > 0){
                z--;
                ans--;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
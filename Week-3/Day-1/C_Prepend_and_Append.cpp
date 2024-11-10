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
        string s;
        cin >> s;
        ll i = 0, j = n-1;
        while(i<j){
            if(s[i] != s[j]){
                i++;
                j--;
            }
            else{
                break;
            }
        }
        cout << j-i+1 << '\n';
    }
    return 0;
}
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
        ll n;
        cin >> n;
        string str;
        cin >> str;
        ll one = 0, zero = 0;
        for(char c:str){
            if(c == '0') zero++;
            else one++;
        }
        ll x = min(zero,one);
        if(x%2 == 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
    }
    return 0;
}
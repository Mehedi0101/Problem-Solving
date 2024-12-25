#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;
        string str;
        cin >> str;
        map<char,ll> mp;
        for(char c:str){
            if(c != '?') mp[c]++;
        }
        ll ans = 0;
        for(auto [key,val]:mp){
            ans += min(n,val);
        }
        cout << ans << endl;
    }
    return 0;
}
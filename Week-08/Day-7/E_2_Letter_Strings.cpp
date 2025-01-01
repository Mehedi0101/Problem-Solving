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
        map<string,ll> mp;
        map<string,ll> mp2;
        while(n--){
            string s,p="";
            cin >> s;
            mp[s]++;
            p += s[0];
            p += 'x';
            mp2[p]++;
            p = "";
            p += 'x';
            p += s[1];
            mp2[p]++;
        }
        ll ans = 0;
        for(auto [key,val]:mp){
            string p = "";
            p += key[0];
            p += 'x';
            ans += (mp2[p]-val)*val;

            p = "";
            p += 'x';
            p += key[1];
            ans += (mp2[p]-val)*val;
        }
        cout << ans/2 << endl;
    }
    return 0;
}
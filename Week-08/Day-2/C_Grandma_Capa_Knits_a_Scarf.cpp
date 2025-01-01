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
        string s;
        cin >> s;
        map<char,ll> mp;
        ll ans = LLONG_MAX;
        for(char c='a'; c<='z'; c++){
            ll i=0, j=n-1, cnt=0;
            bool np = false;
            while(i<=j){
                if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{
                    if(s[i] == c){
                        i++;
                        cnt++;
                    }
                    else if(s[j] == c){
                        j--;
                        cnt++;
                    }
                    else{
                        np = true;
                        break;
                    }
                }
            }
            if(np) mp[c] = LLONG_MAX;
            else{
                mp[c] = cnt;
            }
            ans = min(ans,mp[c]);
        }
        if(ans == LLONG_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
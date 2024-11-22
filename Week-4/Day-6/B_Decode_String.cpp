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
        stack<char> stk;
        while(n--){
            char x;
            cin >> x;
            stk.push(x);
        }
        string ans = "";
        while(!stk.empty()){
            ll k = stk.top();
            stk.pop();
            if(k != '0'){
                ll x = int('a')+int(k-'0')-1;
                ans += char(x);
            }
            else{
                k = int(stk.top()-'0');
                stk.pop();
                k += int(stk.top()-'0')*10;
                stk.pop();
                ll x = int('a')+k-1;
                ans += char(x);
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << '\n';
    }
    return 0;
}
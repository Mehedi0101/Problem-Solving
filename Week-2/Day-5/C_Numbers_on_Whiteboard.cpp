#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,x=-1;
        cin >> n;
        stack<ll> stk;
        for(ll i=1; i<=n; i++){
            if(i == n-2) x = i;
            else stk.push(i);
        }
        cout << 2 << '\n';
        if(x == -1){
            cout << "1 2" << '\n';
        }
        else{
            cout << x << " " << stk.top() << '\n';
            ll k = (stk.top()+x)/2;
            stk.pop();
            stk.push(k);
            while(stk.size() != 1){
                ll a = stk.top();
                stk.pop();
                ll b = stk.top();
                stk.pop();
                cout << b << " " << a << '\n';
                stk.push((a+b)/2);
            }
        }
    }
    return 0;
}
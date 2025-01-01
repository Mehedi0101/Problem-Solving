#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    set<ll> s;
    map<ll,ll> mp;
    stack<ll> stk;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        stk.push(x);
    }
    while(!stk.empty()){
        s.insert(stk.top());
        mp[n] = s.size();
        stk.pop();
        n--;
    }
    while(m--){
        ll pos;
        cin >> pos;
        cout << mp[pos] << '\n';
    }
    return 0;
}
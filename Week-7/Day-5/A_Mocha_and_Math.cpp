#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n, mn = LLONG_MAX;
        cin >> n;
        priority_queue<ll> pq;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            pq.push(x);
            mn = min(mn,x);
        }
        while(pq.top() != mn){
            ll x = pq.top();
            pq.pop();
            ll y = x&mn;
            mn = min(mn,y);
            pq.push(y);
        }
        cout << mn << '\n';
    }
    return 0;
}
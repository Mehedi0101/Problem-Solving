#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,c;
        cin >> n >> c;
        priority_queue<ll,vector<ll>,greater<ll>> pq;
        for(ll i=1; i<=n; i++){
            ll x;
            cin >> x;
            pq.push(x+i);
        }
        ll ans = 0;
        while(!pq.empty() && c > 0){
            if(pq.top() <= c){
                ans++;
                c-=pq.top();
                pq.pop();
            }
            else{
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
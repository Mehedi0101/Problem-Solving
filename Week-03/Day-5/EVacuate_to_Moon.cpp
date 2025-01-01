#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,m,h;
        cin >> n >> m >> h;
        priority_queue<ll> cars, stations;
        while(n--){
            ll x;
            cin >> x;
            cars.push(x);
        }
        while(m--){
            ll x;
            cin >> x;
            stations.push(x);
        }
        ll ans = 0;
        while(!cars.empty() && !stations.empty()){
            ans += min(cars.top(),stations.top()*h);
            cars.pop();
            stations.pop();
        }
        cout << ans << '\n';
    }
    return 0;
}
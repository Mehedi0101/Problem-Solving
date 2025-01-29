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
        ll a,b,c,sum;
        cin >> a >> b >> c;
        sum = a+b+c;
        if(sum%2 == 0){
            priority_queue<ll> pq;
            pq.push(a);
            pq.push(b);
            pq.push(c);
            ll ans = 0;
            while(1){
                ll x = pq.top();
                pq.pop();
                ll y = pq.top();
                pq.pop();
                if(x == 0 || y == 0) break;
                pq.push(--x);
                pq.push(--y);
                ans++;
            }
            cout << ans << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}
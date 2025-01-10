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
        priority_queue<ll> pq;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            pq.push(x);
        }

        auto ok = [&](ll m){
            priority_queue<ll> cpq;
            cpq = pq;
            for(ll i=1; i<=m; i++){
                priority_queue<ll> dpq;
                while(!cpq.empty() && cpq.top() > m-i+1){
                    dpq.push(cpq.top());
                    cpq.pop();
                }
                if(cpq.empty()) return false;
                else{
                    cpq.pop();
                }
                if(!cpq.empty()){
                    while(cpq.size() != 1){
                        dpq.push(cpq.top());
                        cpq.pop();
                    }
                    dpq.push(cpq.top()+m-i+1);
                    cpq.pop();
                    cpq = dpq;
                }
                else{
                    cpq = dpq;
                }
            }
            return true;
        };

        ll l=0, r=n, mid, ans=0;
        while(l<=r){
            ll mid=l+(r-l)/2;
            if(ok(mid)){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
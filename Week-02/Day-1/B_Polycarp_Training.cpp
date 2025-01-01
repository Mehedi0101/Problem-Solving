#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    while(n--){
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll d=1;
    pq.pop();
    while(!pq.empty()){
        if(pq.top() >= d+1){
            d++;
            pq.pop();
        }
        else{
            pq.pop();
        }
    }
    cout << d << '\n';
    return 0;
}
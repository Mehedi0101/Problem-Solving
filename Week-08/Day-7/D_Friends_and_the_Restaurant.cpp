#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
#define pl pair<long long,long long>
using namespace std;

class cmp{
    public:
    bool operator()(pl a, pl b){
        ll da = a.second-a.first;
        ll db = b.second-b.first;
        return da < db;
    }
};

class cmp2{
    public:
    bool operator()(pl a, pl b){
        ll da = a.second-a.first;
        ll db = b.second-b.first;
        return da > db;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        priority_queue<pl,vector<pl>,cmp> pq;
        priority_queue<pl,vector<pl>,cmp2> pr;
        vector<ll> a(n),b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];
        for(ll i=0; i<n; i++){
            if(a[i] > b[i]) pr.push({a[i],b[i]});
            else pq.push({a[i],b[i]});
        }
        ll ans = 0;
        while(!pr.empty() && !pq.empty()){
            pl a = pq.top();
            pl b = pr.top();
            if(a.second + b.second < a.first+b.first){
                pr.pop();
            }
            else{
                ans++;
                pr.pop();
                pq.pop();
            }
        }
        ans += (pq.size()/2);
        cout << ans << endl;
    }
    return 0;
}
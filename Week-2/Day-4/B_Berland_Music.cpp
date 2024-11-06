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
        vector<ll> p(n);
        set<ll> lk,dlk;
        for(ll i=0; i<n; i++){
            cin >> p[i];
        }
        string rating;
        cin >> rating;
        for(ll i=0; i<n; i++){
            if(rating[i] == '1') lk.insert(p[i]);
            else dlk.insert(p[i]);
        }
        map<ll,ll> q;
        ll i = 1;
        for(auto it=dlk.begin(); it!=dlk.end(); it++){
            q[*it] = i;
            i++;
        }
        for(auto it=lk.begin(); it!=lk.end(); it++){
            q[*it] = i;
            i++;
        }
        for(ll i=0; i<n; i++){
            cout << q[p[i]] << " ";
        }
        cout << '\n';
    }
    return 0;
}
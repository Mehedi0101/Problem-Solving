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
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
        }
        ll m = *max_element(v.begin(),v.end());
        vector<queue<char>> vq(m+2);
        char c = 'a';
        for(ll x:v){
            if(x == 0){
                cout << c;
                vq[x+1].push(c);
                c++;
            }
            else{
                cout << vq[x].front();
                vq[x+1].push(vq[x].front());
                vq[x].pop();
            }
        }
        cout << '\n';
    }
    return 0;
}
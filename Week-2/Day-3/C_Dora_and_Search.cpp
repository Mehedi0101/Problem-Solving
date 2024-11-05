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
        set<ll> s;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }
        ll i=0, j=n-1;
        while(j-i>1){
            ll mn= *s.begin(), mx = *s.rbegin();
            if(v[i] != mn && v[i] != mx && v[j] != mn && v[j] != mx){
                break;
            }
            if(v[i] == mn || v[i] == mx){
                s.erase(v[i]);
                i++;
            }
            if(v[j] == mx || v[j] == mn){
                s.erase(v[j]);
                j--;
            }
        }
        if(j-i>1){
            cout << i+1 << " " << j+1 << '\n';
        }
        else{
            cout << -1 << '\n';
        }
    }
    return 0;
}
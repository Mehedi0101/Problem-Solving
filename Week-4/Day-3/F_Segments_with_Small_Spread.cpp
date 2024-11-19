#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll i=0, j=0, ans = 0;
    multiset<ll> ms;
    while(j<n){
        ms.insert(v[j]);
        if(*ms.rbegin()-*ms.begin() <= k){
            ans += j-i+1;
            j++;
        }
        else{
            auto it = ms.find(v[j]);
            ms.erase(it);
            it = ms.find(v[i]);
            ms.erase(it);
            i++;
        }
    }
    cout << ans << '\n';
    return 0;
}
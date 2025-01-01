#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,s,sum = 0;
        cin >> n >> s;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }
        if(sum < s) cout << -1 << '\n';
        else{
            ll i=0, j=0, cnt = 0, ans = 0;
            while(j<n){
                cnt += v[j];
                if(cnt <= s){
                    ans = max(ans,j-i+1);
                    j++;
                }
                else{
                    cnt -= v[j];
                    cnt -= v[i];
                    i++;
                }
            }
            cout << n-ans << '\n';
        }
    }
    return 0;
}
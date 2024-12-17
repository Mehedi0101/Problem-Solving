#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
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
        for(ll i=0; i<n; i++) cin >> v[i];
        vector<ll> cnt(n);
        ll c = 0;
        ll x0 = -1, x1 = -1;
        for(ll i=n-1; i>=0; i--){
            if(v[i] == 0){
                x0 = i;
                cnt[i] = c;
                c++;
            }
            else{
                if(x1 == -1){
                    x1 = i;
                }
                cnt[i] = c;
            }
        }
        ll sum1 = 0, sum2 = 0, sum3 = 0;
        for(ll i=0; i<n; i++){
            if(v[i] == 1) sum1 += cnt[i];
        }
        if(x0 != -1){
            v[x0] = 1;
            for(ll i=0; i<n; i++){
                if(v[i] == 1 && i < x0){
                    sum2 += cnt[i]-1;
                }
                else if(v[i] == 1 && i >= x0){
                    sum2 += cnt[i];
                }
            }
            v[x0] = 0;
        }
        if(x1 != -1){
            v[x1] = 0;
            for(ll i=0; i<n; i++){
                if(v[i] == 1 && i < x1){
                    sum3 += cnt[i]+1;
                }
                else if(v[i] == 1 && i >= x1){
                    sum3 += cnt[i];
                }
            }
            v[x1] = 1;
        }
        cout << max({sum1,sum2,sum3}) << endl;
    }
    return 0;
}
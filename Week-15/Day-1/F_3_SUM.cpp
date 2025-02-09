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
        map<ll,ll> mp;
        ll ans = 0;
        ll ar[n+3];
        for(ll i = 0; i < n; i++){
            cin >> ar[i];
            ll x = ar[i] % 10;
            mp[x]++;
        }
        for(ll i = 0; i < 10; i++){
            for(ll j = 0; j < 10; j++){
                for(ll k = 0; k < 10; k++){
                    ll a = -1, b = -1, c = -1;
                    if(mp[i] != 0){
                        a = 1;
                        mp[i]--;
                    }
                    if(mp[j] != 0){
                        b = 1;
                        mp[j]--;
                    }
                    if(mp[k] != 0){
                        c = 1;
                        mp[k]--;
                    }

                    if(a == 1 && b == 1 && c == 1){
                        ll sum = i + j + k;
                        if(sum % 10 == 3){
                            ans = 1;
                            break;
                        }
                    }
                    if(a == 1) mp[i]++;
                    if(b == 1) mp[j]++;
                    if(c == 1) mp[k]++;
                }
            }
        }
        if(ans == 1) yes;
        else no;
    }
    return 0;
}
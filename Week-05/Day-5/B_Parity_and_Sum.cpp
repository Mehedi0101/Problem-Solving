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
        deque<ll> even;
        ll odd = -1;
        while(n--){
            ll x;
            cin >> x;
            if(x%2 == 0){
                even.push_back(x);
            }
            else{
                odd = max(odd,x);
            }
        }
        sort(even.begin(),even.end());
        if(even.empty() || odd == -1) cout << 0 << '\n';
        else{
            ll ans = 0;
            while(!even.empty()){
                ll f = even.front();
                ll b = even.back();
                if(f < odd){
                    odd += f;
                    even.pop_front();
                    ans++;
                }
                else{
                    odd += b;
                    ans++;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
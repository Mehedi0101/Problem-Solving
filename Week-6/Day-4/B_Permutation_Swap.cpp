#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a%b);
}

ll gcd_of_multiple_numbers(const vector<ll>& numbers) {
    ll result = numbers[0];
    for (size_t i = 1; i < numbers.size(); ++i) {
        result = gcd(result, numbers[i]);
        if (result == 1) {
            break;
        }
    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n+1),v2;
        for(ll i=1; i<=n; i++){
            cin >> v[i];
            if(v[i] != i){
                v2.push_back(abs(v[i]-i));
            }
        }
        ll ans = gcd_of_multiple_numbers(v2);
        cout << ans << '\n';
    }
    return 0;
}
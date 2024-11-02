#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,sum = 0,odd=LLONG_MAX;
    cin >> n;
    while(n--){
        ll x;
        cin >> x;
        if(x%2 != 0){
            odd = min(odd,x);
        }
        sum+=x;
    }
    if(sum % 2 != 0){
        if(odd == LLONG_MAX) cout << 0 << '\n';
        else cout << sum-odd << '\n';
    }
    else{
        cout << sum << '\n';
    }
    return 0;
}
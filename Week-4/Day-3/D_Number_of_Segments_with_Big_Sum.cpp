#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,s;
    cin >> n >> s;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin >> v[i];
    }
    ll i=0, j=0, sum=0, ans=0;
    while(j<n){
        if(sum+v[j] < s){
            sum += v[j];
            j++;
        }
        else{
            ans += n-j;
            sum -= v[i];
            i++;
        }
    }
    cout << ans << '\n';
    return 0;
}
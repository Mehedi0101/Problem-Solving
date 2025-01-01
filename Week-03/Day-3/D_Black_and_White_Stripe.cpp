#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll i=0, j=0, mn = LLONG_MAX, cnt = 0;
        while(j<n){
            if(s[j] == 'W'){
                cnt++;
            }
            if(j-i+1 == k){
                mn = min(mn,cnt);
                if(s[i] == 'W') cnt--;
                i++;
            }
            j++;
        }
        cout << mn << '\n';
    }
    return 0;
}
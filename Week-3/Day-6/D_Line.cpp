#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,sum = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> v(n),pos;
        for(ll i=0; i<n; i++){
            if(s[i] == 'L'){
                v[i] = i;
                sum += v[i];
            }
            else{
                v[i] = (n-i-1);
                sum += v[i];
            }   
        }
        ll i=0, j=n-1;
        while(i<j){
            if(s[i] == 'L') pos.push_back(i);
            if(s[j] == 'R') pos.push_back(j);
            i++;
            j--;
        }
        for(ll k=0; k<n; k++){
            if(k >= pos.size()){
                cout <<  sum << " ";
            }
            else{
                sum -= v[pos[k]];
                sum += max(pos[k],n-pos[k]-1);
                cout <<  sum << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
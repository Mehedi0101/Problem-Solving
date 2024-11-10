#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    vector<ll> arr1(n);
    vector<ll> arr2(m);
    vector<ll> ans;

    for(ll i=0; i<n; i++) cin >> arr1[i];
    for(ll i=0; i<m; i++) cin >> arr2[i];

    ll i=0, j=0;

    while(j < m){
        if(arr1[i] < arr2[j] && i < n){
            i++;
        }
        else{
            ans.push_back(i);
            j++;
        }
    }

    for(ll x:ans) cout << x << " ";
    cout << '\n';
    return 0;
}
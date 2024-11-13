#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n), b(m), c(n+m);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<m; i++){
        cin >> b[i];
    }
    ll i=0,j=0,k=0;
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n){
        c[k] = a[i];
        i++;
        k++;
    }
    while(j < m){
        c[k] = b[j];
        j++;
        k++;
    }
    for(ll x:c){
        cout << x << " ";
    }
    cout << '\n';
    return 0;
}
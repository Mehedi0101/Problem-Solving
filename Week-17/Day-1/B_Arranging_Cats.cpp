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
        string a,b;
        cin >> a >> b;
        ll oz = 0, zo = 0;
        for(ll i=0; i<n; i++){
            if(a[i] == '1' && b[i] == '0') oz++;
            else if(a[i] == '0' && b[i] == '1') zo++;
        }
        cout << max(oz,zo) << endl;
    }
    return 0;
}
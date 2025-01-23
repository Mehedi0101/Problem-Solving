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
        ll n,m;
        cin >> n >> m;
        string a,b;
        cin >> a >> b;
        ll ans = 0;
        ll i = 0, j = 0;
        while(i<n && j<m){
            if(a[i] == b[j]){
                ans++;
                i++;
            }
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}
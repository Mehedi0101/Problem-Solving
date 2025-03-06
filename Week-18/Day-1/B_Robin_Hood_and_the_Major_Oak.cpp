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

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll y = n-(n-k);
        ll fy = n-y;
        ll ly = n;
        ll s = (ly*(ly+1)/2) - (fy*(fy+1)/2);
        s%2 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}
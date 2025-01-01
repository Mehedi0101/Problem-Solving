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

    ll n,k;
    cin >> n >> k;
    vector<ll> div;
    for(ll i=1; i*i <= n; i++){
        if(n%i == 0){
            div.push_back(i);
            ll a = n/i;
            if(a != i){
                div.push_back(a);
            }
        }
    }
    sort(div.begin(),div.end());
    if(div.size() < k) cout << -1 << endl;
    else cout << div[k-1] << endl;
    return 0;
}
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

    ll n,q;
    cin >> n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin >> v[i];
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        ll l=0, r=n-1, m1 = -1, m2 = -1;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(v[mid] < x){
                m1 = v[mid];
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        l = 0; r = n-1;
        while(l<=r){
            ll mid = l+(r-l)/2;
            if(v[mid] <= x){
                l = mid+1;
            }
            else{
                m2 = v[mid];
                r = mid-1;
            }
        }
        if(m1 == -1) cout << "X ";
        else cout << m1 << " ";
        if(m2 == -1) cout << 'X' << endl;
        else cout << m2 << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,ans=0;
    cin >> n;
    set<ll> s;
    while(n--){
    	ll x;
    	cin >> x;
    	s.insert(x);
    	auto it = s.find(x-1);
    	if(it == s.end()) ans++;
    }
    cout << ans << endl;
    return 0;
}

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

    ll x,n;
    cin >> x >> n;
    set<ll> s;
    multiset<ll> ms;
    s.insert(0);
    s.insert(x);
    ms.insert(x);
    vector<ll> v;
    for(ll i=1; i<=n; i++){
    	ll k;
    	cin >> k;
    	s.insert(k);
    	auto it = s.find(k);
    	it--;
    	auto jt = s.upper_bound(k);
    	ll p = *jt-*it;
        auto kt = ms.find(p);
        ms.erase(kt);
        ms.insert(k-*it);
        ms.insert(*jt-k);
    	v.push_back(*ms.rbegin());
    }
    for(ll x:v) cout << x << " ";
    cout << endl;
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

ll minDiff(vector<ll> v, ll sum1, ll sum2, ll i){
	if(i == v.size()){
		return abs(sum1-sum2);
	}
	ll c1 = minDiff(v,sum1+v[i],sum2,i+1);
	ll c2 = minDiff(v,sum1,sum2+v[i],i+1);
	return min(c1,c2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = minDiff(a,0,0,0);
    cout << ans << endl;
    
    return 0;
}

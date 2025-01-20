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
        ll n, x, y;
        cin >> n >> x >> y;
        x--; y--;
        if(x > y) swap(x, y);

        const ll d = y - x;
        vector<ll> a(n, -1);
        for(ll i = 0; i < d; i++)
            a[i] = i & 1;

        for(ll i = 1, j = n - 1; j > d; j--, i++)
            a[j] = i & 1;

        auto get_mex = [&](const ll p, const ll q, const ll r) -> ll {
            set<ll> s = {p, q, r};
            ll c = 0;
            while(s.count(c)) c++;
            return c;
        };

        a[d] = get_mex(a[0], a[(d - 1 + n) % n], a[(d + 1 + n) % n]);

        vector<ll> b(n, -1);
        for(ll i = 0; i < n; i++)
            b[i] = a[(i + n - x) % n];

        for(ll i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}
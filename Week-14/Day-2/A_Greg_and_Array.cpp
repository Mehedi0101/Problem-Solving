#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n), op(n+1), q(m+1);
    vector<vector<ll>> ps(m,vector<ll>(3));

    for (ll i = 0; i < n; i++) cin >> v[i];
    for (ll i = 0; i < m; i++)
    {
        cin >> ps[i][0] >> ps[i][1] >> ps[i][2];
        ps[i][0]--, ps[i][1]--;
    }
    for (ll i = 0; i < k; i++)
    {
        ll a, b;
        cin >> a >> b;
        a--, b--;
        q[a]++, q[b+1]--;
    }

    ll tmp = 0;
    for (ll i = 0; i < m; i++)
    {
        tmp += q[i];
        op[ps[i][0]] += tmp * ps[i][2];
        op[ps[i][1] + 1] -= tmp * ps[i][2];
    }

    tmp = 0;
    for (ll i = 0; i < n; i++)
    {
        tmp += op[i];
        cout << (i == 0 ? "" : " ") << tmp + v[i];
    }
    cout << endl;
    return 0;
}

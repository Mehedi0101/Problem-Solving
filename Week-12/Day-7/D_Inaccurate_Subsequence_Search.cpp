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

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        vector<ll> v1(x), v2(y);
        for (ll i = 0; i < x; i++)
        {
            cin >> v1[i];
        }
        map<ll, ll> m2;
        for (ll i = 0; i < y; i++)
        {
            cin >> v2[i];
            m2[v2[i]]++;
        }
        ll res = 0;
        map<ll, ll> m1;
        ll c = 0;
        for (ll i = 0; i < y; i++)
        {
            m1[v1[i]]++;
            if (m1[v1[i]] <= m2[v1[i]])
                c++;
        }
        if (c >= z)
        {
            res++;
        }

        for (ll i = y; i < x; i++)
        {
            m1[v1[i]]++;
            if (m1[v1[i]] <= m2[v1[i]])
                c++;

            m1[v1[i - y]]--;
            if (m1[v1[i - y]] < m2[v1[i - y]])
                c--;

            if (c >= z)
            {
                res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
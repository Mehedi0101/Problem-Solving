#include <bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll maxN = 1e5 + 9;
ll t[maxN * 4];

void build(ll n, ll b, ll e)
{
    if (b == e)
    {
        t[n] = 0;
        return;
    }
    ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    build(l, b, mid);
    build(r, mid + 1, e);
    t[n] = t[l] + t[r];
}

void update(ll n, ll b, ll e, ll i, ll v)
{
    if (i < b || i > e)
        return;
    if (b == e)
    {
        t[n] = v;
        return;
    }
    ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    t[n] = t[l] + t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j)
{
    if (e < i || j < b)
        return 0;
    if (b >= i && e <= j)
        return t[n];
    ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--)
    {
        ll n, m, q;
        cin >> n >> m;
        vector<pl> a(m);
        for (ll i = 0; i < m; i++)
            cin >> a[i].first >> a[i].second;
        cin >> q;
        vector<ll> queries(q);
        for (ll i = 0; i < q; i++)
            cin >> queries[i];

        auto ok = [&](ll mid)
        {
            build(1, 1, n);
            for (ll i = 0; i <= mid; i++)
                update(1, 1, n, queries[i], 1);

            bool found = false;
            for (ll i = 0; i < m; i++)
            {
                ll L = a[i].first, R = a[i].second, seg_len = (R - L) + 1;
                ll one = query(1, 1, n, L, R);
                ll zero = seg_len - one;
                if (one > zero)
                {
                    found = true;
                    break;
                }
            }
            return found;
        };

        ll l = 0, r = q - 1, mid, ans = -1;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        if (ans != -1)
            ans++;
        cout << ans << endl;
    }
    return 0;
}
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

    ll n;
    cin >> n;
    vector<ll> v(n), ans;
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll q;
    cin >> q;
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll beg = 0, end = n - 1, x = n, y = n;
        while (beg <= end)
        {
            ll mid = beg + (end - beg) / 2;
            if (v[mid] >= l)
            {
                x = mid;
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }

        beg = 0;
        end = n - 1;
        while (beg <= end)
        {
            ll mid = beg + (end - beg) / 2;
            if (v[mid] > r)
            {
                y = mid;
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
            }
        }
        ans.push_back(y - x);
    }
    for (ll x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}
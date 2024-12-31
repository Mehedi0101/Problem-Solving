#include <bits/stdc++.h>
#define ll long long
#define pl pair<ll, ll>
using namespace std;

bool cmp(pl a, pl b) {
    return a.first < b.first;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<pl> v;
    for (ll i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end(), cmp);

    for (ll i = 0; i < n; i++) {
        ll target = k - v[i].first;
        ll l = i + 1, r = n - 1;

        while (l < r) {
            ll sum = v[l].first + v[r].first;
            if (sum == target) {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << endl;
                return 0;
            } else if (sum < target) {
                l++;
            } else {
                r--;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;
    return 0;
}
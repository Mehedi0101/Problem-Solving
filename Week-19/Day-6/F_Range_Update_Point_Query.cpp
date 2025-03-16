#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while (T--) {
        ll n, q;
        cin >> n >> q;
        set<ll> pos;
        vector<ll> v(n);

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] > 9) pos.insert(i);
        }

        while (q--) {
            ll x;
            cin >> x;
            if (x == 1) {
                ll l, r;
                cin >> l >> r;
                l--;
                r--;
                ll lst = l;
                while (pos.size() > 0) {
                    auto it = pos.lower_bound(lst);
                    if (it == pos.end() || *it > r) break;
                    v[*it] = sumOfDigits(v[*it]);
                    ll y = *it;
                    pos.erase(it);
                    if (v[y] > 9) pos.insert(y);
                    lst = y + 1;
                }
            } else {
                ll x;
                cin >> x;
                x--;
                cout << v[x] << endl;
            }
        }
    }
    return 0;
}
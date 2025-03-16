#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v) cin >> x;

    stack<ll> s1, s2;
    stack<ll> gcd1, gcd2;

    gcd1.push(0);
    gcd2.push(0);

    ll l = 0, ans = n + 1;

    for (ll i = 0; i < n; ++i) {
        s2.push(v[i]);
        gcd2.push(__gcd(gcd2.top(), v[i]));

        while (__gcd(gcd1.top(), gcd2.top()) == 1) {
            if (s1.empty()) {
                while (!s2.empty()) {
                    ll x = s2.top();
                    s2.pop();
                    gcd2.pop();
                    s1.push(x);
                    gcd1.push(__gcd(gcd1.top(), x));
                }
            }
            s1.pop();
            gcd1.pop();
            ans = min(ans, i - l + 1);
            l++;
        }
    }

    if (ans > n) ans = -1;
    cout << ans << endl;

    return 0;
}
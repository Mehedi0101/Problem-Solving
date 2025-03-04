#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

ll lcm(ll a, ll b) {
    return (a / __gcd(a, b)) * b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, x, y;
        cin >> n >> x >> y;

        ll lcm_xy = lcm(x, y);
        ll c = n / lcm_xy;
        ll a = n - (n / x) + c;
        ll b = n / y - c;

        ll result = (n * (n + 1) - a * (a + 1) - b * (b + 1)) / 2;
        cout << result << endl;
    }
    return 0;
}
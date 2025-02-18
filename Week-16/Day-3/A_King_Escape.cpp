#include <bits/stdc++.h>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll ai, aj, bi, bj, ci, cj;
    cin >> ai >> aj >> bi >> bj >> ci >> cj;

    auto quadrant = [&](ll x, ll y) -> int {
        if (x > ai && y > aj) return 1;
        if (x < ai && y > aj) return 2;
        if (x < ai && y < aj) return 3;
        if (x > ai && y < aj) return 4;
        return 0;
    };

    ll qb = quadrant(bi, bj);
    ll qc = quadrant(ci, cj);

    if (qb == qc && qb != 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll mod = 1e9 + 7;
const ll MX = 1e7 + 5;

ll tree[600000];
ll ar[300005];

void insert(ll node, ll b, ll e) {
    if (b == e) {
        tree[node] = ar[b];
        return;
    }
    ll Left = node * 2;
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    insert(Left, b, mid);
    insert(Right, mid + 1, e);
    tree[node] = (tree[Left] & tree[Right]);
}

ll query(ll node, ll b, ll e, ll i, ll j) {
    if (i > e || j < b) return 2147483647; 
    if (b >= i && e <= j) return tree[node]; 
    ll Left = node * 2; 
    ll Right = node * 2 + 1;
    ll mid = (b + e) / 2;
    ll p1 = query(Left, b, mid, i, j);
    ll p2 = query(Right, mid + 1, e, i, j);
    return p1 & p2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++) cin >> ar[i];
        ll q;
        cin >> q;
        vector<ll> v;
        insert(1, 1, n);

        while (q--) {
            ll l, k;
            cin >> l >> k;
            ll low = l, high = n, ans = -1;
            while (low <= high) {
                ll mid = (low + high) / 2;
                ll x = query(1, 1, n, l, mid);
                if (x >= k) {
                    low = mid + 1;
                    ans = mid;
                } else {
                    high = mid - 1;
                }
            }
            v.push_back(ans);
        }
        for (auto u : v) cout << u << " ";
        cout << endl;
    }
    return 0;
}
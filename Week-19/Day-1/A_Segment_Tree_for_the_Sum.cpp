#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll maxN = 1e5 + 9;
ll a[maxN], t[4 * maxN];

void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = t[l] + t[r];
}

void update(ll n, ll b, ll e, ll i, ll v) {
   if (i < b || i > e) {
      return;
   }
   if (b == e) {
      t[n] = v;
      return;
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   update(l, b, mid, i, v);
   update(r, mid + 1, e, i, v);
   t[n] = t[l] + t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j) {
   if (e < i || j < b) {
      return 0;
   }
   if (b >= i && e <= j) {
      return t[n];
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n, m;
   cin >> n >> m;
   for (ll i = 1; i <= n; i++) {
      cin >> a[i];
   }

   build(1, 1, n);
   while (m--) {
      ll x;
      cin >> x;
      if (x == 1) {
         ll idx, v;
         cin >> idx >> v;
         idx++;
         update(1, 1, n, idx, v);
      }
      else {
         ll l, r;
         cin >> l >> r;
         l++;
         ll ans = query(1, 1, n, l, r);
         cout << ans << endl;
      }
   }
   return 0;
}
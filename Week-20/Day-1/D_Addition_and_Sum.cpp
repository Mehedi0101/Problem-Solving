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
ll a[maxN], t[maxN * 4], lazy[maxN * 4];

void push(ll n, ll b, ll e) {
   if (lazy[n] == 0) return;
   t[n] += (1LL * (e - b + 1) * lazy[n]);
   if (b != e) {
      ll l = (2 * n), r = (2 * n) + 1;
      lazy[l] += lazy[n];
      lazy[r] += lazy[n];
   }
   lazy[n] = 0;
}

void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = t[l] + t[r];
}

void update(ll n, ll b, ll e, ll i, ll j, ll v) {
   push(n, b, e);
   if (e < i || j < b) return;
   if (b >= i && e <= j) {
      lazy[n] = v;
      push(n, b, e);
      return;
   }
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   update(l, b, mid, i, j, v);
   update(r, mid + 1, e, i, j, v);
   t[n] = t[l] + t[r];
}

ll query(ll n, ll b, ll e, ll i, ll j) {
   push(n, b, e);
   if (e < i || j < b) return 0;
   if (b >= i && e <= j) return t[n];
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n, m;
   cin >> n >> m;
   build(1, 1, n);
   while (m--) {
      ll t;
      cin >> t;
      if (t == 1) {
         ll l, r, v;
         cin >> l >> r >> v;
         l++;
         update(1, 1, n, l, r, v);
      }
      else {
         ll l, r;
         cin >> l >> r;
         l++;
         cout << query(1, 1, n, l, r) << endl;
      }
   }
   return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll maxN = 1e5 + 9, inf = 1e18;
ll a[maxN];

struct node {
   ll mn, count;
};
node t[maxN * 4];

node merge(node l, node r) {
   node ans;
   ans.mn = min(l.mn, r.mn);
   ans.count = 0;
   if (l.mn == ans.mn) ans.count += l.count;
   if (r.mn == ans.mn) ans.count += r.count;
   return ans;
}

void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n].mn = a[b];
      t[n].count = 1;
      return;
   }
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = merge(t[l], t[r]);
}

void update(ll n, ll b, ll e, ll i, ll x) {
   if (i < b || i > e) return;
   if (b == e) {
      t[n].mn = x;
      t[n].count = 1;
      return;
   }
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   update(l, b, mid, i, x);
   update(r, mid + 1, e, i, x);
   t[n] = merge(t[l], t[r]);
}

node query(ll n, ll b, ll e, ll i, ll j) {
   if (e < i || j < b) return {inf, 1};
   if (b >= i && e <= j) return t[n];
   ll mid = (b + e) / 2, l = 2 * n, r = (2 * n) + 1;
   return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n, m;
   cin >> n >> m;
   for (ll i = 1; i <= n; i++) cin >> a[i];

   build(1, 1, n);
   while (m--) {
      ll type;
      cin >> type;
      if (type == 1) {
         ll idx, v;
         cin >> idx >> v;
         idx++;
         update(1, 1, n, idx, v);
      }
      else {
         ll l, r;
         cin >> l >> r;
         l++;
         node res = query(1, 1, n, l, r);
         cout << res.mn << " " << res.count << endl;
      }
   }
   return 0;
}
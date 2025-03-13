#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll maxN = (1 << 17) + 9;
ll a[maxN], t[maxN * 4];

ll merge(ll ans_l, ll ans_r, ll len) {
   ll pw = __lg(len);
   if (pw % 2 != 0) return (ans_l | ans_r);
   else return (ans_l ^ ans_r);
}

void build(ll n, ll b, ll e) {
   if (b == e) {
      t[n] = a[b];
      return;
   }
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   build(l, b, mid);
   build(r, mid + 1, e);
   t[n] = merge(t[l], t[r], e - b + 1);
}

void update(ll n, ll b, ll e, ll i, ll v) {
   if (i < b || i > e) return;
   if (b == e) {
      t[n] = v;
      return;
   }
   ll mid = (b + e) / 2, l = (2 * n), r = (2 * n) + 1;
   update(l, b, mid, i, v);
   update(r, mid + 1, e, i, v);
   t[n] = merge(t[l], t[r], e - b + 1);
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll n, q;
   cin >> n >> q;
   n = (1 << n);
   for (ll i = 1; i <= n; i++) cin >> a[i];

   build(1, 1, n);
   while (q--) {
      ll i, x;
      cin >> i >> x;
      update(1, 1, n, i, x);
      cout << t[1] << endl;
   }
   return 0;
}
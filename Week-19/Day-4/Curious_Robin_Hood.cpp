#include<bits/stdc++.h>
#define ll long long int
#define pl pair<ll, ll>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

const ll SIZE = 1e5 + 9;
ll a[SIZE];
ll n;

void update(ll i, ll val) {
   while (i <= n) {
      a[i] += val;
      i += (i & (-i));
   }
}

ll query(ll i) {
   ll ans = 0;
   while (i > 0) {
      ans += a[i];
      i -= (i & (-i));
   }
   return ans;
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t;
   cin >> t;
   for (ll cs = 1; cs <= t; cs++) {
      cin >> n;
      ll q;
      cin >> q;
      memset(a, 0, sizeof(a));

      for (ll i = 1; i <= n; i++) {
         ll x;
         cin >> x;
         update(i, x);
      }

      cout << "Case " << cs << ":\n";
      while (q--) {
         ll ch;
         cin >> ch;
         if (ch == 1) {
            ll x;
            cin >> x;
            x++;
            ll ans = query(x) - query(x - 1);
            update(x, -ans);
            cout << ans << endl;
         }
         else if (ch == 2) {
            ll x, w;
            cin >> x >> w;
            x++;
            update(x, w);
         }
         else if (ch == 3) {
            ll x, y;
            cin >> x >> y;
            x++;
            y++;
            ll ans = query(y) - query(x - 1);
            cout << ans << endl;
         }
      }
   }
   return 0;
}
#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll b = 0;
        for (char ch : s) {
            if (ch == 'B') b++;
        }

        if (b == k) {
            cout << 0 << endl;
            continue;
        }

        char c = (b < k ? 'A' : 'B');
        char d = (b < k ? 'B' : 'A');
        ll cnt = (b < k ? (k - b) : (b - k));
        ll idx = 0;

        for (ll p = 0; p < s.size(); p++) {
            if (s[p] == c) cnt--;
            if (cnt == 0) {
                idx = p + 1;
                break;
            }
        }

        cout << 1 << endl;
        cout << idx << " " << d << endl;
    }
    return 0;
}
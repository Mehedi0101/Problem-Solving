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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll cnt = 0;
        cnt = (s[0] == '@');

        for (ll i = 1; i < n; i++) {
            if (s[i] == s[i - 1] && s[i] == '*') {
                break;
            } else {
                cnt += (s[i] == '@');
            }
        }

        cout << cnt << endl;
    }
    return 0;
}
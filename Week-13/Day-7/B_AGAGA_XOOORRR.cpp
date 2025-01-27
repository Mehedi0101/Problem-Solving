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

        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<ll> pre(n);
        pre[0] = arr[0];
        for (ll i = 1; i < n; i++) {
            pre[i] = pre[i - 1] ^ arr[i];
        }

        bool flag = false;

        for (ll i = 0; i < n - 1; i++) {
            if (pre[i] == (pre[n - 1] ^ pre[i])) {
                flag = true;
                break;
            }
        }

        for (ll i = 0; i < n - 2 && !flag; i++) {
            ll st = pre[i];
            for (ll j = i + 1; j < n - 1; j++) {
                ll mid = pre[j] ^ pre[i];
                ll en = pre[n - 1] ^ pre[j];
                if (st == mid && mid == en) {
                    flag = true;
                    break;
                }
            }
        }

        if (flag) {
            yes;
        } else {
            no;
        }
    }

    return 0;
}

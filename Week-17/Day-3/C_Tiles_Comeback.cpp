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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (v[0] == v[n - 1]) {
            ll count = 0;
            for (ll i = 0; i < n; i++) {
                if (v[i] == v[0]) {
                    count++;
                }
                if (count == k) {
                    break;
                }
            }
            if (count == k) {
                yes;
            } else {
                no;
            }
        } else {
            ll count1 = 0, count2 = 0;
            ll temp = -1;
            for (ll i = 0; i < n; i++) {
                if (v[i] == v[0]) {
                    count1++;
                }
                if (count1 == k) {
                    temp = i;
                    break;
                }
            }
            if (temp != -1) {
                for (ll i = temp + 1; i < n; i++) {
                    if (v[i] == v[n - 1]) {
                        count2++;
                    }
                    if (count2 == k) {
                        break;
                    }
                }
            }
            if (count1 == k && count2 == k) {
                yes;
            } else {
                no;
            }
        }
    }
    return 0;
}
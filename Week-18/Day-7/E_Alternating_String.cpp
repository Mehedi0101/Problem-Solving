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

        if (n % 2 == 0) {
            map<char, ll> odd, even;
            ll mxOdd = 0, mxEven = 0;

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    even[s[i]]++;
                    mxEven = max(mxEven, even[s[i]]);
                } else {
                    odd[s[i]]++;
                    mxOdd = max(mxOdd, odd[s[i]]);
                }
            }

            ll res = (n / 2) - mxEven + (n / 2) - mxOdd;
            cout << res << endl;
        } else {
            map<char, ll> odd, even;
            ll mn = LLONG_MAX;

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    even[s[i]]++;
                } else {
                    odd[s[i]]++;
                }
            }

            map<char, ll> curEven, curOdd;

            for (int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    even[s[i]]--;
                } else {
                    odd[s[i]]--;
                }

                for (auto& x : odd) {
                    curEven[x.first] += x.second;
                }
                for (auto& x : even) {
                    curOdd[x.first] += x.second;
                }

                ll mxOdd = 0, mxEven = 0;
                for (auto& x : curEven) {
                    mxEven = max(mxEven, x.second);
                }
                for (auto& x : curOdd) {
                    mxOdd = max(mxOdd, x.second);
                }

                ll res = (n / 2) - mxOdd + (n / 2) - mxEven + 1;
                mn = min(mn, res);

                for (auto& x : odd) {
                    curEven[x.first] -= x.second;
                }
                for (auto& x : even) {
                    curOdd[x.first] -= x.second;
                }

                if (i % 2 == 1) {
                    curOdd[s[i]]++;
                } else {
                    curEven[s[i]]++;
                }
            }

            cout << mn << endl;
        }
    }
    return 0;
}
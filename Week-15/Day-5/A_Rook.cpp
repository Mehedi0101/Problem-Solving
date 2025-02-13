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

    ll T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        for (char row = '1'; row <= '8'; row++) {
            if (row != s[1]) {
                cout << s[0] << row << endl;
            }
        }

        for (char col = 'a'; col <= 'h'; col++) {
            if (col != s[0]) {
                cout << col << s[1] << endl;
            }
        }
    }
    return 0;
}
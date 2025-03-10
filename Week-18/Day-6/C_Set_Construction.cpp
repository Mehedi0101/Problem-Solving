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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<set<int>> s(n + 1);
        for (int i = 1; i <= n; i++) {
            s[i].insert(i);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '1') {
                    s[j + 1].insert(i + 1);
                }
            }
        }

        for (int i = 1; i <= n; i++) {
            cout << s[i].size() << " ";
            for (int val : s[i]) {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
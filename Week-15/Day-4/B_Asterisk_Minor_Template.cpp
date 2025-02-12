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
        string a, b;
        cin >> a >> b;

        bool found = false;

        if (a[0] == b[0]) {
            yes;
            cout << a[0] << '*' << endl;
            found = true;
        }
        else if (a.back() == b.back()) {
            yes;
            cout << '*' << a.back() << endl;
            found = true;
        }
        else {
            for (int i = 0; i < b.size() - 1; i++) {
                string temp = b.substr(i, 2);
                if (a.find(temp) != string::npos) {
                    yes;
                    cout << '*' << temp << '*' << endl;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            no;
        }
    }
    return 0;
}
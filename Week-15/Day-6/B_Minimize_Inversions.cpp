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
        vector<pair<int, int>> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i].first;
        }

        for (int i = 0; i < n; i++) {
            cin >> arr[i].second;
        }

        sort(arr.begin(), arr.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return (a.first + a.second) < (b.first + b.second);
        });

        for (int i = 0; i < n; i++) {
            cout << arr[i].first << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++) {
            cout << arr[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
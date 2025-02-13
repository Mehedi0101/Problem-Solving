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
        unordered_map<char, deque<int>> pos;
        for (int i = 0; i < s.size(); i++) pos[s[i]].push_back(i);
        
        int ans = INT_MAX;
        for (auto& it : pos) {
            deque<int> &p = it.second;
            p.push_front(-1);
            p.push_back(s.size());
            int mx = 0;
            for (int i = 0; i < p.size() - 1; i++) mx = max(mx, p[i + 1] - p[i] - 1);
            ans = min(ans, mx ? (int)log2(mx) + 1 : 0);
        }
        cout << ans << endl;
    }
    return 0;
}
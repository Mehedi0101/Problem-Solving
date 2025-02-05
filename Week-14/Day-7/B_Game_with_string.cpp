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
    ll k = 0;
    string s;
    cin >> s;
    stack<char> stk;

    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            k++;
            stk.pop();
        } else {
            stk.push(c);
        }
    }
    
    (k % 2 == 0) ? No : Yes;
    return 0;
}

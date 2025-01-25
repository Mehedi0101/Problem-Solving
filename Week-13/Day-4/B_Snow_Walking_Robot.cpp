#include<bits/stdc++.h>
#define ll long long int
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        map<char, ll> freq;
        for (char ch : str) {
            freq[ch]++;
        }

        ll min_ud = min(freq['U'], freq['D']);
        ll min_lr = min(freq['L'], freq['R']);

        if (min_ud == 0 && min_lr == 0) {
            cout << 0 << endl;
            cout << "" << endl;
        } else if (min_ud == 0) {
            cout << 2 << endl << "LR" << endl;
        } else if (min_lr == 0) {
            cout << 2 << endl << "UD" << endl;
        } else {
            string res;
            res += string(min_ud, 'U');
            res += string(min_lr, 'R');
            res += string(min_ud, 'D');
            res += string(min_lr, 'L');

            cout << res.size() << endl;
            cout << res << endl;
        }
    }
    return 0;
}

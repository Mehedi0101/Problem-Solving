#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<char> v;
        char init;
        cin >> init;
        v.push_back(init);
        n--;
        while(n--){
            char ch;
            cin >> ch;
            if(v.back() != ch) v.push_back(ch);
        }
        ll zero = 0, one = 0;
        for(char c:v){
            if(c == '0') zero++;
            else one++;
        }
        cout << min(zero,one) << '\n';
    }
    return 0;
}
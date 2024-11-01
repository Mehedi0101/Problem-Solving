#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    set<string> st;
    ll ps = 0;
    while(n--){
        string s;
        cin >> s;
        st.insert(s);
        if(st.size() != ps){
            cout << "NO" << '\n';
            ps++;
        }
        else{
            cout << "YES" << '\n';
        }
    }
    return 0;
}
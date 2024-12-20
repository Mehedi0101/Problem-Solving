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
        ll n;
        cin >> n;
        vector<char> v(n);
        map<char,ll> mp;
        for(ll i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }
        ll y = mp['N']-mp['S'], x = mp['E']-mp['W'];
        if(n == 2 && ((mp['N'] == 1 && mp['S'] == 1) || (mp['E'] == 1 && mp['W'] == 1))) no;
        else if(x % 2 != 0 || y % 2 != 0) no;
        else{
            for(ll i=0; i<n; i++){
                if(v[i] == 'E' || v[i] == 'W'){
                    if(x > 0 && v[i] == 'E'){
                        if(x%2 == 0){
                            cout << 'H';
                            mp[v[i]]--;
                            x--;
                        }
                        else{
                            cout << 'R';
                            mp[v[i]]--;
                            x--;
                        }
                    }
                    else if(x < 0 && v[i] == 'W'){
                        if(x%2 == 0){
                            cout << 'H';
                            mp[v[i]]--;
                            x++;
                        }
                        else{
                            cout << 'R';
                            mp[v[i]]--;
                            x++;
                        }
                    }
                    else{
                        if(mp[v[i]] % 2 == 0){
                            cout << 'H';
                            mp[v[i]]--;
                        }
                        else{
                            cout << 'R';
                            mp[v[i]]--;
                        }
                    }
                }
                else if(v[i] == 'N' || v[i] == 'S'){
                    if(y > 0 && v[i] == 'N'){
                        if(y%2 == 0){
                            cout << 'R';
                            mp[v[i]]--;
                            y--;
                        }
                        else{
                            cout << 'H';
                            mp[v[i]]--;
                            y--;
                        }
                    }
                    else if(y < 0 && v[i] == 'S'){
                        if(y%2 == 0){
                            cout << 'R';
                            mp[v[i]]--;
                            y++;
                        }
                        else{
                            cout << 'H';
                            mp[v[i]]--;
                            y++;
                        }
                    }
                    else{
                        if(mp[v[i]] % 2 == 0){
                            cout << 'R';
                            mp[v[i]]--;
                        }
                        else{
                            cout << 'H';
                            mp[v[i]]--;
                        }
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}
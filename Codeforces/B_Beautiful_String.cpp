#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll T;
    cin >> T;
    while(T--){
        ll n;
        cin >> n;

        string str;
        cin >> str;

        vector<ll> v;
        for(ll i=0; i<n; i++){
            if(str[i] == '0') v.push_back(i+1);
        }

        cout << v.size() << endl;
        for(ll i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
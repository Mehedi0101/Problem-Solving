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

    ll n, cnt = 0;
    bool a = true;
    cin >> n;
    ll i = 0;
    while(i<n){
        if(a && cnt < 2){
            cout << 'a';
            cnt++;
            i++;
        }
        else if(a && cnt == 2){
            cnt = 0;
            a = false;
        }
        else if(!a && cnt < 2){
            cout << 'b';
            cnt++;
            i++;
        }
        else if(!a && cnt == 2){
            cnt = 0;
            a = true;
        }
    }
    cout << endl;
    return 0;
}
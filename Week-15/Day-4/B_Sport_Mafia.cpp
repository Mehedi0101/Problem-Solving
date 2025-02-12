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

    ll n, k;
    cin >> n >> k;

    ll total = n + k;
    ll cnt = 0;

    while((cnt * (cnt + 1)) / 2 < total){
        cnt++;
    }

    if((cnt * (cnt + 1)) / 2 > total){
        cnt--;
    }

    cout << n - cnt << endl;

    return 0;
}
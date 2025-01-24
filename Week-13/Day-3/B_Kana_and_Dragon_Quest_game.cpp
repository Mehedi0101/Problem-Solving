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
        ll hp, n, m;
        cin >> hp >> n >> m;
        while(hp > 20 && n > 0){
            hp = (hp/2)+10;
            n--;
        }
        hp -= (m*10);
        if(hp<=0) yes;
        else no;
    }
    return 0;
}
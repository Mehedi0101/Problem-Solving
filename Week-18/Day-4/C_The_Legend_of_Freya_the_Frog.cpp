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
    int t;
    cin >> t;
    while(t--){
        long long int x,y,k;
        cin >> x >> y >> k;
        cout << max(2*((y+k-1)/k),2*((x+k-1)/k)-1) << endl;
    }
    return 0;
}
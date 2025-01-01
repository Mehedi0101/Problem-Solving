#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll w,d,l;
    cin >> w >> d >> l;
    l*2+d >=4 ? cout << "No" << '\n' : cout << "Yes" << '\n';
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        string a,b;
        cin >> a >> b;
        ll al = a.size()-1, bl = b.size()-1;
        ll as, bs;
        if(a[al] == 'M') as = 0;
        else if(a[al] == 'S'){
            as = al*(-1)-1;
        }
        else{
            as = al+1;
        }

        if(b[bl] == 'M') bs = 0;
        else if(b[bl] == 'S'){
            bs = bl*(-1)-1;
        }
        else{
            bs = bl+1;
        }

        if(as < bs) cout << "<" << '\n';
        else if(as == bs) cout << "=" << '\n';
        else cout << ">" << '\n';
    }
    return 0;
}
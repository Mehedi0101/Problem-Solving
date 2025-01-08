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

    string s;
    cin >> s;
    ll rb = 0, rs = 0, rc = 0;
    for(char c:s){
        if(c == 'B') rb++;
        else if(c == 'S') rs++;
        else rc++;
    }

    ll gb, gs, gc, pb, ps, pc, bal;
    cin >> gb >> gs >> gc;
    cin >> pb >> ps >> pc;
    cin >> bal;

    auto ok = [&](ll m){
        ll mb = m*rb, ms = m*rs, mc = m*rc;
        ll cost = 0;
        if(mb > gb){
            cost += (mb-gb)*pb;
        }
        if(ms > gs){
            cost += (ms-gs)*ps;
        }
        if(mc > gc){
            cost += (mc-gc)*pc;
        }
        return cost <= bal;
    };

    ll l=0, r=1e12+100, mid, ans=0;
    while(l<=r){
        mid = l+(r-l)/2;
        if(ok(mid)){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans << endl;
    return 0;
}
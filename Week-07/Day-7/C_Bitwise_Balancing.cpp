#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll b,c,d;
        cin >> b >> c >> d;
        vector<bool> bbits(64,false), cbits(64,false), dbits(64,false);
        for(ll i=0; i<64; i++){
            if((b>>i)&1) bbits[i] = true;
            if((c>>i)&1) cbits[i] = true;
            if((d>>i)&1) dbits[i] = true;
        }
        vector<bool> ansbits(64,false);
        bool no_ans = false;
        for(ll i=0; i<64; i++){
            if(dbits[i]){
                if((!bbits[i] && !cbits[i])){
                    ansbits[i] = true;
                }
                else if(!bbits[i] && cbits[i]){
                    no_ans = true;
                    break;
                }
                else if(bbits[i] && !cbits[i]){
                    ansbits[i] = false;
                }
                else{
                    ansbits[i] = false;
                }
            }
            else{
                if((!bbits[i] && !cbits[i])){
                    ansbits[i] = false;
                }
                else if(!bbits[i] && cbits[i]){
                    ansbits[i] = false;
                }
                else if(bbits[i] && !cbits[i]){
                    no_ans = true;
                    break;
                }
                else{
                    ansbits[i] = true;
                }
            }
        }
        if(no_ans) cout << -1 << '\n';
        else{
            ll ans = 0;
            for(ll i=0; i<64; i++){
                if(ansbits[i]) ans += (1LL<<i);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}
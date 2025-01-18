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
        string p,pp;
        cin >> p >> pp;
        unordered_map<char,ll> mp,mpp;
        for(ll c:p) mp[c]++;
        ll k = p.size();
        ll i=0,j=0;
        bool ans = false;
        while(j<pp.size()){
            mpp[pp[j]]++;
            if(j-i+1 == k){
                if(mp == mpp){
                    ans = true;
                    break;
                }
                mpp[pp[i]]--;
                if(mpp[pp[i]] == 0) mpp.erase(pp[i]);
                i++;
            }
            j++;
        }
        ans ? yes : no;
    }
    return 0;
}
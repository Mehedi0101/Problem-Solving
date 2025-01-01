#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,packed = 0;
    cin >> n;
    map<ll,ll> boxes;
    while(n--){
        ll x;
        cin >> x;
        boxes[x]++;
    }
    vector<ll> cnt;
    for(auto it=boxes.begin(); it!=boxes.end(); it++){
        cnt.push_back(it->second);
    }
    sort(cnt.begin(),cnt.end());
    cout << cnt.back() << '\n';
}
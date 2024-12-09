#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const ll maxVal = (1LL << 15);
vector<ll> allPalindromes;

bool isPalindrome(ll x){
    string s = to_string(x);
    ll n = s.size();
    for(ll i=0; i<=n/2; i++){
        if(s[i] != s[n-i-1])
        return false;
    }
    return true;
}

void palindromeChecker(ll x){
    for(ll i=0; i<=x; i++){
        if(isPalindrome(i)) allPalindromes.push_back(i);
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    palindromeChecker(maxVal);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v(n), cnt(1LL << 15);
        for(ll i=0; i<n; i++){
            cin >> v[i];
            cnt[v[i]]++;
        }
        ll ans = n;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<allPalindromes.size(); j++){
                ll x = v[i]^allPalindromes[j];
                ans += cnt[x];
            }
        }
        cout << ans/2 << '\n';
    }

    return 0;
}
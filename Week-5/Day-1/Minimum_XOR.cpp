#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        int total_xor = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            total_xor = total_xor^v[i];
        }
        int ans = total_xor;
        for(int i=0; i<n; i++){
            int x = total_xor^v[i];
            ans = min(ans,x);
        }
        cout << ans << '\n';
    }
    return 0;
}
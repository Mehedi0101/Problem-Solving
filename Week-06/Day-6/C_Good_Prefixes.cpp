#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t){
        int n, mx=INT_MIN, good=0;
        long long int sum = 0;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i]>=mx){
                mx = v[i];
            }
            else{
                sum -= mx;
                sum += v[i];
            }
            if(mx==sum){
                good++;
            }
            if(v[i]>=mx){
                sum+=v[i];
            }
            else{
                sum+=mx;
            }
        }
        cout << good << endl;
        t--;
    }
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll k=1, l=n*n;
        bool lik = false;
        for(ll i=0; i<n; i++){
            deque<ll> dq;
            if(i%2 == 0){
                for(ll j=1; j<=n; j++){
                    if(lik){
                        dq.push_back(l);
                        l--;
                        lik = false;
                    }
                    else{
                        dq.push_back(k);
                        k++;
                        lik = true;
                    }
                }
            }
            else{
                for(ll j=1; j<=n; j++){
                    if(lik){
                        dq.push_front(l);
                        l--;
                        lik = false;
                    }
                    else{
                        dq.push_front(k);
                        k++;
                        lik = true;
                    }
                }
            }
            while(!dq.empty()){
                cout << dq.front() << " ";
                dq.pop_front();
            }
            cout << '\n';
        }
    }
    return 0;
}
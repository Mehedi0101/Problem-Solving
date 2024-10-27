#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;
    list<ll> cards;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        cards.push_back(x);
    }
    ll i=0, sereja = 0, dima = 0;
    while(!cards.empty()){
        if(i%2 == 0){
            if(cards.front() > cards.back()){
                sereja += cards.front();
                cards.pop_front();
            }
            else{
                sereja += cards.back();
                cards.pop_back();
            }
        }
        else{
            if(cards.front() > cards.back()){
                dima += cards.front();
                cards.pop_front();
            }
            else{
                dima += cards.back();
                cards.pop_back();
            }
        }
        i++;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
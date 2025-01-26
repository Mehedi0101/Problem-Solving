#include<bits/stdc++.h>
#define ll long long int
#define Yes cout<<"Yes"<<'\n'
#define yes cout<<"YES"<<'\n'
#define No cout<<"No"<<'\n'
#define no cout<<"NO"<<'\n'
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = 0;
        priority_queue<ll> p, q;

        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            p.push(x);
            sum += x;
        }

        q.push(sum);

        for (ll i = 1; i <= n - 1; i++) {
            if (i == 1) {
                ll x = q.top();
                q.pop();
                ll t1 = x / 2, t2 = x - t1;
                q.push(t1);
                q.push(t2);
            } else {
                while (!p.empty() && !q.empty() && p.top() == q.top()) {
                    p.pop();
                    q.pop();
                }
                ll x = q.top();
                q.pop();
                ll t1 = x / 2, t2 = x - t1;
                q.push(t1);
                q.push(t2);
            }
            while (!p.empty() && !q.empty() && p.top() == q.top()) {
                p.pop();
                q.pop();
            }
        }

        while (!p.empty() && !q.empty() && p.top() == q.top()) {
            p.pop();
            q.pop();
        }

        if (p.empty() && q.empty()) {
            yes;
        } else {
            no;
        }
    }
    return 0;
}

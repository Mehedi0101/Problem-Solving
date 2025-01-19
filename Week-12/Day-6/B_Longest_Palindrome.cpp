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

    int n, m;
    cin >> n >> m;
    map<string, int>mp;
    string tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        mp[tmp]++;
    }
    string spal;
    string ans;
    for (auto& i: mp)
    {
        string x = i.first;
        reverse(x.begin(), x.end());
        if(x == i.first)
        {
            if(!spal.size())
            {
                spal += i.first;
            }
        }
        else if(mp[x])
        {
            ans += i.first;
        }
        i.second--;
    }
    int sz = (ans.size() * 2 + spal.size());
    cout << sz << '\n';
    if(sz)
    {
        cout << ans << spal;
        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    return 0;
}
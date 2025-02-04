#include<bits/stdc++.h>
#define ll long long int
#define pl pair<long long,long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; 
    cin >> T;
    while(T--)
    {
        int n, k; 
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;

        for (int i = 0; i < k / 2; i++)
        {
            int cnt[26] = {};
            int x = 0;
            for (int j = 0; j + k - 1 < n; j += k)
            {
                int l = j + i;
                int r = j + (k - 1 - i);
                cnt[s[l] - 'a']++;
                cnt[s[r] - 'a']++;
                x += 2;
            }
            int mx = *max_element(cnt, cnt + 26);
            ans += x - mx;
        }
        if (k & 1)
        {
            int cnt[26] = {};
            int x = 0;
            for (int i = k / 2; i < n; i += k)
            {
                cnt[s[i] - 'a']++;
                x++;
            }
            int y = *max_element(cnt, cnt + 26);
            ans += x - y;
        }

        cout << ans << '\n';
    }
    return 0;
}
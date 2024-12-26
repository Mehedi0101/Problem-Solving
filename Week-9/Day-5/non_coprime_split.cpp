#include <iostream>
#define ll long long int
#define pl pair<long long, long long>
#define Yes cout << "Yes" << '\n'
#define yes cout << "YES" << '\n'
#define No cout << "No" << '\n'
#define no cout << "NO" << '\n'
#define endl '\n'
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t;
	cin >> t;
	while (t--)
	{
		ll l, r;
		cin >> l >> r;
		ll x = r - l;
		if (r < 4)
			cout << -1 << endl;
		else if (x == 0 && r % 2 != 0)
		{
			bool b = false;
			for (ll i = 2; i * i <= r; i++)
			{
				if (r % i == 0)
				{
					cout << i << " " << r - i << endl;
					b = true;
					break;
				}
			}
			if (!b)
				cout << -1 << endl;
		}
		else if (r % 2 == 0)
			cout << r / 2 << " " << r / 2 << endl;
		else if (x > 0)
			cout << (r - 1) / 2 << " " << (r - 1) / 2 << endl;
	}
	return 0;
}
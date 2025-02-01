#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

map<int, int> mp;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	long long n;
	cin >> n;
	for (int i = 2; 1ll * i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			int cnt = 0;
			while (n % i == 0)
			{
				cnt++;
				n /= i;
			}
			mp.insert({i, cnt});
		}
	}
	if (n > 1)
		mp.insert({n, 1});
	cout << mp.size() << '\n';
	for (auto it : mp)
	{
		cout << it.first << ' ' << it.second <<'\n';
	}
}


#include <bits/stdc++.h>
#include <map>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;
multimap<int, int>  mp;
int x;
Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	for (int i = 1; i <= 10; ++i)
	{
		 cin >> x;
		mp.insert({x, i});
	}
	cin >> x;
	if (mp.count(x))
	{
		for (auto it : mp)
		{
			if (it.first == x)
			{
				cout << it.second << " ";
			}
		}
	}
	else cout << -1;
}

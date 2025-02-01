#include <bits/stdc++.h>
#include <iterator>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x;
set<int> se;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		se.insert(x);
	}
	if (se.size() == 1)
		cout << "NOT FOUND";
	else cout << *next(se.rbegin());
}

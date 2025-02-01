#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], dp[maxn];

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		dp[i] = 1;
		for (int j = 1; j < i; ++j)
		{
			if (a[i] > a[j])
				dp[i] = max(dp[j] + 1, dp[i]);
		}
	}
	cout << *max_element(dp + 1, dp + n + 1);
}

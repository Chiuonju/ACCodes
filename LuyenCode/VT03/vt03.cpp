#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
int ans = 0, num = -1e10;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; ++i)	
	{
		cin >> a[i];
		if (num <= a[i]) ans = i, num = a[i];
	}
	cout << ans;
	
}

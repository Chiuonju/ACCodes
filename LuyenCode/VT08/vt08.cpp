#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a[maxn], n;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 0; i < n; ++i)	
	{
		cin >> a[i];
	}
	for (int i = 1; i < n; i += 2)
	{
		a[i] += abs(a[i - 1] - a[i + 1]);
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}

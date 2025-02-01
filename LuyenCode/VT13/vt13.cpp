#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], sum = 0, num1, num2;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> a[i];
	for (int i = 1; i < n; ++i)
	{
		if (sum <= a[i] + a[i + 1])
		{
			sum = a[i] + a[i + 1];
			num1 = a[i];
			num2 = a[i + 1];
		}
	}
	if (sum < a[1] + a[n])
	{
		cout << a[n] << ' ' << a[1];
	}
	else 
		cout << num1  << ' ' << num2;
}

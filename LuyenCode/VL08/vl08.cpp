#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a, b, sum = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (!(i & 1))
			sum += i;
	}
	cout << sum;
}

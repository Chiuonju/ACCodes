#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x, cnt = 0;
long long sum = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 1;  i <= n; ++i)
	{
		cin >> x;
		if (x & 1) sum += x, cnt++;
	}
	cout << setprecision(4) << fixed << 1.0 * sum / cnt;
}

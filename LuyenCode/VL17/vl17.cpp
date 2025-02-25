#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, cnt = 2;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	n = abs(n);
	for (int i = 2; 1ll * i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			cnt++;
			if (i != n / i)
				cnt++;
		}
	}
	if (n == 1) cout << 1;
	else cout << cnt;
}

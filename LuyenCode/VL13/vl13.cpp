#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;
long long sum = 1;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	if (n == 1) return cout << "NO", 0;
	for (int i = 2; 1ll * i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			sum += i;
			if (i != n / i) sum += n / i;
		}
	}
	if (sum == n)
		cout << "YES";
	else  cout << "NO";
}

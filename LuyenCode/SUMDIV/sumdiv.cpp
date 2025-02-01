#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
	
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		long long sum = 0;
		for (int i = 1; 1ll * i * i <= n; ++i)
		{
			if (n % i == 0)
			{
				if (i != n / i)
					sum += i;
				sum += n / i;
			}
		}
		cout << sum << "\n";
	}
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int prime[maxn], n;
void sieve()
{
	
	for (int i = 2; 1ll * i * i <= maxn; ++i)
	{
		if (!prime[i])
		{
			for (int j = i * i; j <= maxn; j += i)
			{
				prime[j] = 1;
			}
		}
	}
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	sieve();
	cin >> n;
	for (int i = 2; i <= n; ++i)
		if (!prime[i]) cout << i << " ";
}

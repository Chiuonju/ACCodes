#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long n;

bool isPrime(long long n)
{
	for (int i = 2; 1ll * i * i <= n; ++i)
	{
		if (n % i == 0) return false;
	}
	return n > 1;
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	if (isPrime(n)) cout << "YES";
	else cout << "NO";
}

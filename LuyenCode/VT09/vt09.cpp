#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x;
set<int> se;

bool isPrime(int n)
{
	for (int i = 2; 1ll * i * i <= n; ++i)
		if (n % i == 0) return false;
	return n > 1;
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> x;
		if (isPrime(x)) se.insert(x);
	}
	for (auto it : se)
		cout << it << " ";
}

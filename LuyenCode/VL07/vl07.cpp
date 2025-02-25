#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long c[1002][1002];
int n, k;

long long C (int n, int k)
{
	if (k == 0 || n == k) return 1;
	if (k == 1)	return n;
	if (c[n][k]) return c[n][k];
	c[n][k] = C(n - 1, k - 1) + C(n - 1, k)	;
	return c[n][k];
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> k;
	cout << C(n, k);
}

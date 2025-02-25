#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	if (n & 1)
	{
		cout << - (3 * n + 1) / 2;

	}
	else 
		cout << (3 * n + 1 ) - 3 * n / 2;
}

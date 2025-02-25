#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x, a[maxn];
bool ok = false;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> x;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if (a[i] == x)
			ok = true;
	}
	if (ok)	
		cout << "YES";
	else cout << "NO";
}

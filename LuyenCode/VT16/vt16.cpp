#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int x; bool ok = false;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	while (cin >> x)
	{
		if (!x) break;
		if (x < 0) cout << x << ' ', ok = true;
	}
	if (!ok) cout << "NOT FOUND";
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	if (!(n > 0 && n <= 100000))
		return cout << "INVALID", 0;
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0 && n % 100 == 0))
		cout << "YES";
	else cout << "NO";
}

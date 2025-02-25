#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long a, b, c, d;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b >> c >> d;
	if (a <= d && c <= b)
		cout << "YES";
	else cout << "NO";
}

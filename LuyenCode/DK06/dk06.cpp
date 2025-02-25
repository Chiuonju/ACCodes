#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a, b;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b;
	if (a == 0 && b != 0)
	{
		cout << "NO";
	}
	else if (a == 0 && b == 0)
	{
		cout << "WOW";
	}
	else cout << setprecision(2) << fixed << 1.0 * -b / a;
}

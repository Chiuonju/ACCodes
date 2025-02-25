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
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	if (b == 0) cout << "ERROR";
	else cout << setprecision(2) << fixed << 1.0 * a / b << "\n";
}

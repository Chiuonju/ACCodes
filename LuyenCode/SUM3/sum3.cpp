#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	cout << setprecision(5) << fixed << 1.0 * n / (n + 1) ;
}

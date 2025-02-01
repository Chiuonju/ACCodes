#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long double a;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a;
	cout << setprecision(3) << fixed << (long double) (a * a) * (acos(-1)) / 2;
}

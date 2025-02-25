#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long double x;
int n;
long long gt = 1;
long double ans = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> x >> n;
	for (int i = 1; i <= n; ++i)	
	{
		gt *= i;
		ans += (long double) pow(x, i) / gt;
	}
	cout << setprecision(2) << fixed << ans;
}

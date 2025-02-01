#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a, b;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b;
	if (b == 0) return cout << "INVALID", 0;
	int num = __gcd(a, b);
	a /= num, b /= num;	
	if ((a < 0 && b < 0) || (b < 0))
	{
		a = -a;
		b = -b;
	}
	if (b == 1)	
		cout << a;
	else cout << a << ' ' << b;
}

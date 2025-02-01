#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;
long double a, b;
char c;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> c >> b;
	if (c == '+')	
	{
		cout << setprecision(2) << fixed << 1.0 * a + b;
	}
	if (c == '-')
	{
		cout << setprecision(2) << fixed << 1.0 * a - b;
	}
	if (c == '*')
	{
		cout << setprecision(2) << fixed << 1.0 * a * b;
	}
	if (c == '/')
	{
		if (b == 0)
			cout << "Math Error";
		else 
			cout << setprecision(2) << fixed << 1.0 * a / b;

	}
}

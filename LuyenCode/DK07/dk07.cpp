#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long double a, b, c;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b >> c;
	int delta = b * b - 4 * a * c;
	if (a == 0 && b == 0 && c == 0) return cout << "WOW", 0;
	if (a == 0 && b == 0 && c != 0) return cout << "NO", 0;
	if (a == 0 && b != 0) return cout << -c / b, 0;
	if (delta < 0) 
	{
		cout << "NO";
	}
	else if (delta == 0)
	{
		cout << -b / (2 * a);
	}
	else 
	{
		cout << setprecision(2) << fixed << (long double) (-b - sqrt(delta)) / (2 * a);
		cout << " ";
		cout << setprecision(2) << fixed << (long double) (-b + sqrt(delta)) / (2 * a);
	}
}

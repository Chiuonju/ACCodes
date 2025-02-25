#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long n;

bool squared(long long n)
{
	long long tmp = sqrt(n);
	return tmp * tmp == n;
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;
	if (squared(n)) cout << "YES";
	else cout << "NO";
}

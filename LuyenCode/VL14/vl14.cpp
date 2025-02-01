#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

int a, b;

const int maxn = 1e6 + 7;
Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b;
	cout << abs(__gcd(a, b));
}

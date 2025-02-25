#include <bits/stdc++.h>
#include <cctype>
#include <ios>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

char a, b;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> a >> b;
	for (char i = a; i <= b; i++)
	{
		// char x = uppercase(i);
		// cout << x << " ";
		cout << (char) toupper(i) << " ";
	}
}

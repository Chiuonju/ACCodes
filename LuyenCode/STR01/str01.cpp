#include <bits/stdc++.h>
#include <cctype>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	string s;
	getline(cin, s);
	for (auto &c : s)
		c = tolower(c);
	cout << s;
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

string s;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	while (cin >> s)
	{
		if (s[0] == s.back()) cout << "YES\n";
		else cout << "NO\n";
	}
}

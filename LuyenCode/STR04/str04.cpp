#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

map<char, int> mp;


Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	string s;
	getline(cin, s);
	for (auto &c : s) c = tolower(c);
	for (auto &c : s)
	{
		if (isdigit(c) || isalpha(c)) mp[c]++;
	}
	for (auto it : mp)
	{
		cout << it.first << ' ' << it.second << '\n';
	}
}


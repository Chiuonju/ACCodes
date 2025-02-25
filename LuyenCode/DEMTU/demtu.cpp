#include <bits/stdc++.h>
#include <sstream>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int cnt = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	string s;
	getline(cin, s);
	stringstream ss(s);
	string token;
	while (ss >> token)
	{
		cnt++;
	}
	cout << cnt;
}

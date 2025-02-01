#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;
int t;
string n;
Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> t;
	while (t--)
	{
		int sum = 0;	
		cin >> n;
		for (auto c : n)
			sum += c - '0';
		cout << sum << '\n';
	}
}

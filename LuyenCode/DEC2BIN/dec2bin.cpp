#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		string s = "";
		while (n)	
		{
			s += (n & 1);
			n >>= 1;
		}
		reverse(s.begin(), s.end());
		cout << s << '\n';

	}
}

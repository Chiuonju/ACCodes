#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		int ans = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == ' ' && (isalpha(s[i + 1]) || isdigit(s[i + 1]))) ans++;
		}
		if (s.back() == ' ') ans++;
		cout << ans << "\n";
	}
}

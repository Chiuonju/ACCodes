#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

string solve (string s)
{
	string ans;
	stringstream ss(s);
	string token;
	while (ss >> token)
	{
		for (int i = 1; i < token.size(); ++i)	
		{
			token[i] = tolower(token[i]);
		}
		token[0] = toupper(token[0]);
		ans += token + " ";
	}	
	return ans;
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		cout << solve(s) << '\n';
	}
}


#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n;	
	if (n > 0)
	{
		for (int i = n; i >= 1; --i)
		{
			if (n % i == 0)
				cout << i << ' ';
		}
	}
	else if (n == 0)
		cout << "INF";
	else 
	{
		for (int i = n; i <= -1; ++i)
			if (n % i == 0) cout << abs(i) << ' ';
	}
}

#include <bits/stdc++.h>
#include <unordered_map>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x;
unordered_map<int, int> mp;
int num;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> n >> x;
	for (int i = 1; i <= n; ++i)
		cin >> num, mp[num]++;
	cout << mp[x];
}

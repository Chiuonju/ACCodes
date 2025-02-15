#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;
map<int, int> mp;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        int x; cin >> x;
        mp[x]++;
    }
    for (const auto &x : mp)
    {
        cout << x.first << ' ' << x.second << '\n';
    }
}

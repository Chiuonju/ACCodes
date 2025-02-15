#include <bits/stdc++.h>
#include <unordered_map>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
unordered_map<int, int> mp;
int ans = 0;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], mp[a[i]]++;
    for (auto &x : mp)
    {
        if (x.second > 1)
            ans += x.second;
    }
    cout << ans;
}

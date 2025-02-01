#include <bits/stdc++.h>
#include <unordered_map>
#define int long long
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
long long ans = 0;

unordered_map<int, int> mp;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (auto &x : mp) 
    {
        ans += x.second * (x.second - 1) / 2;
    }
    cout << ans;
}

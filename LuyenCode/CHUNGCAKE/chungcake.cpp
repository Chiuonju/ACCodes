#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, v, a[maxn];
int dp[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> v;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = v; j >= a[i]; --j)
        {
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout << dp[v];
}

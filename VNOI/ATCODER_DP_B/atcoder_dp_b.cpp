#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, k;
int height[maxN];
int dp[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    memset(dp, 60, sizeof dp);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> height[i];
    dp[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 1; j <= k; ++j)
        {
            if (i > j)
                dp[i] = min(dp[i - j] + abs(height[i] - height[i - j]), dp[i]);
        }
    }
    cout << dp[n];
}

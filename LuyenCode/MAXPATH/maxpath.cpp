#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int m, n, a[maxn][maxn];
long long dp[maxn][maxn];
long long ans = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= m; ++i)  
    {
        dp[i][1] = a[i][1];
    }

    for (int i = 2; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            dp[j][i] = max({dp[j][i - 1] + a[j][i], dp[j + 1][i - 1] + a[j][i], dp[j - 1][i - 1] + a[j][i]});
        }
    }


    for (int i = 1; i <= m; ++i)
    {
        ans = max(ans, dp[i][n]);
    }
    cout << ans;
}

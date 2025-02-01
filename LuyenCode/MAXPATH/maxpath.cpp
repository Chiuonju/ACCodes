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
    dp[1][1] = a[1][1];
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
           dp[i][j] = max({dp[i][j], dp[i][j - 1] + a[i][j], dp[i - 1][j - 1] + a[i][j], dp[i + 1][j - 1] + a[i][j]});
        }
    }
     for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }
    
    for (int i = 1; i <= m; ++i)
    {
        ans = max(ans, dp[i][n]);
    }
    cout << ans;
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 3e3 + 7;

int n, m;
string a, b;
int dp[maxn][maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;
    cin >> a >> b;
    a = ' ' + a;
    b = ' ' + b;
    for (int i = 1; i <= m; ++i)
    {
        dp[i][0] = 0;
        for (int j = 1; j <= n; ++j)
        {
            dp[0][j] = 0;
            if (a[i] != b[j])
                dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            else
                dp[i][j] =  dp[i - 1][j - 1] + 1;
        }
    }
    cout << dp[m][n];
}

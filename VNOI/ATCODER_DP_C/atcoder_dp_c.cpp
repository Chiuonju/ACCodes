#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e5 + 7;

int n;
int a[maxN], b[maxN], c[maxN];
int dp[maxN][3];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    dp[1][0] = a[1];
    dp[1][1] = b[1];
    dp[1][2] = c[1];
    for (int i = 2; i <= n; ++i)
    {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
    }
    cout << max({dp[n][0], dp[n][1], dp[n][2]});
}

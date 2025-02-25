#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a[maxn], n;
long long ans = 1e18;
long long dp[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    dp[1] = a[1];
    for (int i = 1; i <= n; ++i)
        dp[i] = dp[i - 1] + a[i];
    for (int i = 1; i <= n; ++i)
    {
        ans = min(ans, abs(dp[i] - (dp[n] - dp[i])));
    }
    cout << ans;
}

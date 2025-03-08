#include <bits/stdc++.h>
#define int long long
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;
const int MOD = 1e9 + 7;
int n;
int dp[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        dp[i] %= MOD;
    }
    cout << dp[n];
}

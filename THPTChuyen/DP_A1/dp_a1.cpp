#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int MOD = 1e9 + 7;
const int maxn = 1e6 + 7;

int n, t;
long long dp[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    dp[1] = dp[2] = 1;
    for (int i = 3; i <= (int) 1e6; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= MOD;
    }
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }
}

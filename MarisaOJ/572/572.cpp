#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
long long self[maxN], help[maxN];
long long dp[maxN];
Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n; 
    for (int i = 1; i <= n; ++i)
    {
        cin >> self[i]; 
    }
    for (int i = 1; i < n; ++i)
    {
        cin >> help[i];
    }
    dp[1] = self[1];
    for (int i = 2; i <= n; ++i)
    {
        dp[i] = min(dp[i - 1] + self[i], dp[i - 2] + help[i - 1]);

    }
    cout << dp[n];
}

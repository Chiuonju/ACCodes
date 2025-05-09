#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int dist[maxN];
int dp[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n - 1; ++i)
        cin >> dist[i];         
    dp[1] = dist[0];
    dp[2] = dist[0] + dist[1];
    for (int i = 3; i <= n; ++i)
    {
        dp[i] = min(dp[i - 2] + dist[i - 1], dp[i - 1]  + dist[i - 1]);
    }
    cout << dp[n - 1];
}

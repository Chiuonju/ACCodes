#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e5 + 7;

int n;
int height[maxN];
int dp[maxN];


Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n; 
    for (int i = 1; i <= n; ++i)
        cin >> height[i];
    dp[2] = abs(height[2] - height[1]);
    for (int i = 3; i <= n; ++i)
    {
        dp[i] = min(dp[i - 1] + abs(height[i] - height[i - 1]), dp[i - 2] + abs(height[i] - height[i - 2]));
    }
    cout << dp[n];
}

#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, k;
int score[maxN];
int dp[maxN];


Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    
    memset(dp, -32, sizeof dp);
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> score[i];

    dp[0] = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= k; ++j)
        {
            if (i >= j)
                dp[i] = max(dp[i], dp[i - j] + score[i]);
        }
    }
    cout << *max_element(dp, dp + n + 1);

}


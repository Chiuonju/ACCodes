#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], C;
int dp[maxn];

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> C;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = C; j >= a[i]; --j)
        {
            dp[j] = max(dp[j], dp[j - a[i]] + a[i]);
        }
    }
    cout << dp[C];
}

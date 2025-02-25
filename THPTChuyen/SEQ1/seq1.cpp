#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], dp[maxn];
int ans = 0;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    dp[1] = a[1];
    for (int i = 2; i <= n; ++i)
        dp[i] = min(a[i], dp[i - 1]);
    for (int i = 1; i <= n; ++i)
    {
        ans = max(ans, a[i] - dp[i]);
    }
    cout << ans;
}

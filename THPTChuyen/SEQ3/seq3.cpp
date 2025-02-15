#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x, a[maxn];
long long dp[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (i == 1) dp[i] = a[i];
        else dp[i] += dp[i - 1] + a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        sum += a[i];
        if (sum < ans)
        {
            
        }
    } 

}

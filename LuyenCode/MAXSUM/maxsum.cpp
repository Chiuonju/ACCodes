#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int a[maxN];
long long sum[maxN];
long long ans = -1ll << 62;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], sum[i] = sum[i - 1] + a[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i; j <= n; ++j)
        {
            ans = max(ans, sum[j] - sum[i - 1]);
        }
    }
    cout << ans;
}

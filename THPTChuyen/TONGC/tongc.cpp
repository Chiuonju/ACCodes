#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long n, a[maxn], k;
long long pre[maxn];
int ans = 0;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    pre[1] = a[1];
    for (int i = 2; i <= n; ++i)
        pre[i] = pre[i - 1] + a[i];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (pre[j] - pre[i - 1] == k)
                ans++;
        }
    }
    cout << ans;
}

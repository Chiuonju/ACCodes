#include <bits/stdc++.h>
#define Chiuonju signed main
#define bit(i, mask) ((mask >> i) & 1)

using namespace std;

const int maxn = 1e6 + 7;

int n, k, pre[maxn];
long long ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (i == 1) pre[i] = x;
        else pre[i] = pre[i - 1] + x;
    }
    int boss = pre[n];
    for (int i = 0; i < n; ++i)
    {
        int num = lower_bound(pre + 1, pre + n + 1, pre[i] + k) - pre;

        ans += n - num + 1;
    }
    cout << ans;
}

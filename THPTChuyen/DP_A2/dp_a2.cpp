#include <bits/stdc++.h>
#include <cstdint>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], mi[maxn], ma[maxn];
int ans = INT_MIN;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    mi[1] = ma[1] = a[1];
    for (int i = 1; i <= n; ++i)
    {
        mi[i] = min(mi[i - 1], a[i]);
    }
    for (int i = n; i >= 1; --i)
        ma[i] = max(ma[i - 1], a[i]);
    for (int i = 1; i <= n; ++i)
    {
        ans = max(ans, ma[i] - mi[i]);
    }
    cout << ans;
}

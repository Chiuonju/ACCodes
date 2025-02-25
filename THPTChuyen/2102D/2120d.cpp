#include <bits/stdc++.h>
#define Chiuonju signed main
#define bit(i, mask) ((mask >> i) & 1)

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
long long ans = -1, k;

bool check(long long x)
{
    long long sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] >= x)
            sum += a[i] - x;
        if (sum >= k) return true;
    }
    return false;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    long long l = 0, r = 1e18;
    while (r - l > 1)
    {
        long long mid = l + (r - l) / 2;
        if (check(mid)) ans = mid, l = mid;
        else r = mid;
    }
    cout << ans;
}


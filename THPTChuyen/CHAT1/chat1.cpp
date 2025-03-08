#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, t;

long long check(int mid)
{
    return 1ll * mid * mid + 1;
}


Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> t;
    while (t--)
    {
        int x;
        cin >> x;
        long long ans = 0;
        long long l = 0, r = 1e18;
        while (r - l > 1)
        {
            long long m = l + (r - l) / 2;
            if (check(m) >= x) ans = m, r = m;
            else l = m;
        }
        cout << ans * ans + 1 << '\n';
    }
}

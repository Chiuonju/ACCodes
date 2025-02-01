#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

int a, b;
long long ans = 0;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b;
    for (int i = 1; 1ll * i * i <= n; ++i)
    {
        ans += n / a;
    }
    cout << ans;
}

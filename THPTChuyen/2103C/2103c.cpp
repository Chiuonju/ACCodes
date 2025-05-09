#include <bits/stdc++.h>
#include <cmath>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int flowers[maxN];
long long maxFlowers;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> flowers[i];
    sort(flowers + 1, flowers + n + 1);
    for (int i = 1; i <= n; ++i)
    {
        maxFlowers = max(maxFlowers, 1ll * flowers[i] * (n - i + 1));
    }
    cout << maxFlowers;
}

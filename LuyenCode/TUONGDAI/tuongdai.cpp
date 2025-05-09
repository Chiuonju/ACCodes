#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, q;
long long sum[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        sum[i] = sum[i - 1] + x;
    }
    while (q--)
    {
        int u, v;
        cin >> u >> v;
        cout << sum[v] - sum[u - 1] << ' ';
    }
}

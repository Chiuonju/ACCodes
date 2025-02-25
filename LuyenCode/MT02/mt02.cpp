#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int n, m, a[maxn][maxn];
long long sum = 0;
Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    }
    for (int i = 1; i <= m; ++i)
    {
        if ((i - 1) & 1)
            for (int j = 1; j <= n; ++j)
            {
                sum += a[i][j];       
            }
    }
    cout << sum;
}

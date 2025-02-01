#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int n, a[maxn][maxn];
long long sum = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j == i)
                sum += a[i][j];
        }
    }
    cout << sum;
}

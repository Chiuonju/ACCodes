#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int a[maxn][maxn];
int n, m;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << a[i][j] << ' ';
        }
        cout << "\n";
    }
}

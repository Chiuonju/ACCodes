#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int m, n, k, a[maxn][maxn];
vector<int> tmp;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; ++i) 
    {
        tmp.push_back(a[k][i]);
    }
    sort(tmp.begin(), tmp.end());
    for (int i = 1; i <= m; ++i)
    {
        if (i == k)
        {
            for (auto &x : tmp)
                cout << x << " ";
        }
        else 
            for (int j = 1; j <= n; ++j)
                cout << a[i][j] << " ";
        cout << '\n';
    }
}

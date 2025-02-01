#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, m, a[maxn], b[maxn];

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i)
    {
        int x;
        cin >> x;
        if (binary_search(a + 1, a + n + 1, x))
            cout << 1;
        else cout << 0;
    }
}

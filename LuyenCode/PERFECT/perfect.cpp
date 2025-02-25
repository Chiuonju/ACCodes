#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
int ans = 2e9;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    
    for (int i = 1; i <= n - 1; ++i)
    {
        ans = min(ans, a[i + 1] - a[i]);
    }
    cout << ans;
}

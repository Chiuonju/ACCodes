#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;
int n, a[maxn];
Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    cout << accumulate(a + n / 2 + 1, a + 1 + n, 0) - accumulate(a + 1, a + n / 2 + 1, 0);
}

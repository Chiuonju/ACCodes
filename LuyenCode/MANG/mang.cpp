#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, x, sum = 0, cnt = 0, pos = 0, a[maxn];

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
        if (!(a[i] & 1))
            cnt++;
        if (a[i] > 0) pos = i;
    }
    cout << sum << ' ' << cnt << ' ' ;
    if (pos)
        cout << a[pos];
    else cout << 0;
}

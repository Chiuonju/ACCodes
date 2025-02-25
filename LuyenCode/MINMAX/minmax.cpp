#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], _min = maxn, min_pos = 0, _max = -maxn, max_pos = 0;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        if (_min > a[i])
        {
            _min = a[i];
            min_pos = i;
        }
        if (_max < a[i])
        {
            _max = a[i];
            max_pos = i;
        }
    }
    cout << _min << ' ' << min_pos << " " << _max << " " << max_pos;
}

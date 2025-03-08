#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long n, a[maxn], t;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1 , a + n + 1);
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        if (binary_search(a + 1, a + n + 1, x))
            cout << "Y";
        else cout << "N";
        cout << '\n';
    }
}

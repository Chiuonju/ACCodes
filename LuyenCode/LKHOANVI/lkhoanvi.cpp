#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 17;

int n, x[maxn], d[maxn];

void Try (int pos)
{
    if (pos == n + 1) 
    {
        for (int i = 1; i <= n; ++i)
        {
            cout << x[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!d[i])
        {
            x[pos] = i;
            d[i] = 1;
            Try(pos + 1);
            d[i] = 0;
        }
    }
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    Try(1);
}

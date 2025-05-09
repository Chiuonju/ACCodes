#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int d[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> d[i];
    sort(d + 1, d + n + 1, greater<int>());
    for (int i = n / 2; i <= n; ++i)
    {
        if (d[i] != d[i + 1]) 
            return cout << i, 0;
    }
}

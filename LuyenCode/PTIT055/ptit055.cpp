#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

int n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 0; i <= 30; ++i)
    {
        cout << n << " x " << i << " = " << 1ll * n * i << '\n';
    }
}

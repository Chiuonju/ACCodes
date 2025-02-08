#include <bits/stdc++.h>
#define Chiuonju signed main
#define bit(i, mask) ((mask >> i) & 1)

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int mask = 0; mask < 1 << n; ++mask)
    {
        for (int i = n - 1; ~i; --i)
            cout << bit(i, mask);
        cout << '\n';
    }
}

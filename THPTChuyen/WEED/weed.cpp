#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int w[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> w[i];
    sort(w + 1, w + 1 + n);
    cout << w[n] - w[1];
}

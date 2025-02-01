#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, t;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << setprecision(8) << fixed << 1.0 * (2 * n) / (n + 1);
        cout << "\n";
    }
}

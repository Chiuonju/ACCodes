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
        long double sum = sqrt(2);
        for (int i = 1; i < n; ++i)
        {
            sum = sqrt(2 + sum);
        }
        if (n == 1) cout << sqrt(2) << "\n";
        else cout << setprecision(5) << fixed << sum << '\n';
    }
}

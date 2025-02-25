#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t;

long double a[maxn];

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> t;
    long double sum = 0;
    for (int i = 1; i <= 1e6; ++i)
        sum += 1.0 / i, a[i] = sum;
    while (t--)
    {
        int n;
        cin >> n;
        cout << setprecision(5) << fixed << a[n] << '\n';
    }
}

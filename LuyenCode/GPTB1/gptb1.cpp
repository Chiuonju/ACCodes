#include <bits/stdc++.h>
#include <cmath>
#include <csignal>
#include <cstdlib>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

double  a, b, c, d, e, f;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b >> c >> d >> e >> f;
    double bruh =  a * e - d * b;
    double dx = c * e - f * b;
    double dy = a * f - d * c;
    if (bruh == 0)
    {
        if (dx == 0 && dy == 0)
            cout << "VOSONGHIEM";
        else cout << "VONGHIEM";
        return 0;
    }
    double x = 1.0 * dx / bruh;
    double y = 1.0 * dy / bruh;
    cout << setprecision(2) << fixed << x << ' ' << y;
}

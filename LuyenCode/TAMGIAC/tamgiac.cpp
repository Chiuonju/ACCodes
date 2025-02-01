#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long a, b, c;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b >> c;
    if (a + b > c && a + c > b  && a + c > b)
    {
        cout << a + b + c << ' '; 
        long double p = (a + b + c) / 2;
        cout << setprecision(2) << fixed << 1.0 * sqrt(p * (p - a) * (p - b) * (p - c));
    }
    else cout << "NO";
}

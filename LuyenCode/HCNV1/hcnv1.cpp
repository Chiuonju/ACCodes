#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int a, b, c, d, x, y;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b >> c >> d >> x >> y;
    if (x > min(a, c) and x < max(c, a) and y > min(b, d) and y < max(b, d))
        cout << "YES";
    else cout << "NO";
}

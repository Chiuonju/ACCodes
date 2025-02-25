#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

int a, b, c;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b >> c;
    int fi = min({a, b, c});
    int th = max({a, b, c});
    int se = (a + b + c) - fi - th;
    cout << th << ' ' << se << ' ' << fi;
}


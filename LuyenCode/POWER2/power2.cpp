#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

long long a, n;
long long Pow (long long a, long long b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> n;
    cout << Pow(a, n);
}

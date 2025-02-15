#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    if (n == 0)
        return cout << 1, 0;
    if (n % 4 == 0)
        cout << 6;
    if (n % 4 == 1)
        cout << 2;
    if (n % 4 == 2)
        cout << 4;
    if (n % 4 == 3)
        cout << 8;

}

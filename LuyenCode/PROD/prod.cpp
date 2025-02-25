#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a, b;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> a >> b;
    if (a * b > 0) cout << 1;
    else if (a * b < 0) cout << -1;
    else cout << 0;
}

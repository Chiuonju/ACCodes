#include <bits/stdc++.h>
#include <iostream>
#define Chiuonju signed main
#define NAME ""
using namespace std;

const int maxn = 1e6 + 7;

long long n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> n;
    cout << 1ll * ((n * (n + 1)) >> 1) * ((n * (n + 1)) >> 1);
}

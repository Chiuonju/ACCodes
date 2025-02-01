#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n;
string a[maxn];

bool cmp (string a, string b)
{
    return a + b > b + a;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; ++i)
        cout << a[i];
}

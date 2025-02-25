#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 1;

int t;
int n;
double ans[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> t;
    ans[1] = 1.0;
    for (int i = 2; i < maxn; ++i)
    {
        ans[i] = ans[i - 1] + 1.0 / (2 * i - 1);
    }
    while (t--)
    {
        cin >> n;
        cout << fixed << setprecision(5) << ans[n] << '\n';
    }
}

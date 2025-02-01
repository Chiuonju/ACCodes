#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t; long double ans[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    ans[1] = 1.0;
    for (int i = 2; i <= maxn; ++i)
    {
       ans[i] = sqrt(ans[i - 1] + i); 
    }
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        cout << setprecision(5) << fixed << ans[n] << "\n";
    }
}

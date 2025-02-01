#include <bits/stdc++.h>
#include <iomanip>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

int t;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> t;
    while (t--)
    {
        long double n;
        cin >> n;
        long double ans = 0;
        for (int i = n; i >= 1; --i)
        {
            ans = sqrt(ans + i);
        }
        cout << setprecision(5) << fixed << ans << '\n';
    }
}

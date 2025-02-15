#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main


using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn];
int ans = -1e9;
int maxI[maxn], maxJ[maxn], minK[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        maxI[i] = max(maxI[i - 1], a[i]); 
        maxJ[i] = max(maxJ[i - 1], a[i]);
    }
    for (int i = n; i >= 1; --i)
    {
        minK[i] = min(minK[i + 1], a[i]);
    }
    for (int i = 1; i <= n; ++i)
        cout << maxI[i] << " ";
    cout << '\n';
    for (int i = 1; i <= n; ++i)
        cout << maxJ[i] << ' ';
    cout << '\n';
    for (int i = 1; i <= n; ++i)
        cout << minK[i] << ' ';
    cout << '\n';
    for (int i = 1; i <= n; ++i)
    {
        ans = max(ans, maxI[i] + maxJ[i + 1] - minK[i + 2]);
    }
    cout << '\n' << ans;
}

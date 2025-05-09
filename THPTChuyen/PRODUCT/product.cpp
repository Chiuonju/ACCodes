#include <bits/stdc++.h>
#define Chiuonju signed main
using namespace std;

const int maxN = 1e6 + 7;

int n, m;
long long k;
long long arrA[maxN], arrB[maxN];
long long ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i)
        cin >> arrA[i];
    for (int i = 1; i <= n; ++i)
        cin >> arrB[i];
    sort(arrB + 1, arrB + n + 1);
    for (int i = 1; i <= m; ++i)
    {
        if (arrA[i] == 0)
        {
            if (k == 0)
                ans += n;
        }
        else if (arrA[i] != 0 && k % arrA[i] == 0)
        {
            if (binary_search(arrB + 1, arrB + n + 1, k / arrA[i]))
            {
                ans += upper_bound(arrB + 1, arrB + n + 1, k / arrA[i]) - lower_bound(arrB + 1, arrB + n + 1, k / arrA[i]);
            }
        }
    }
    cout << ans;
}


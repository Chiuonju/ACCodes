#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
long long arr[maxN];
long long ans;
long long minX = 1e18, maxX = -1;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i <= n; ++i)
    {
        minX = min(minX, arr[i] * arr[i]);
        maxX = max(maxX, arr[i] * arr[i]);
    }
    cout << maxX - minX;
}

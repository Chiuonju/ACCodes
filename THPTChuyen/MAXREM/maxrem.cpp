#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arr[maxN];
int ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    for (int i = 1; i < n; ++i)
        ans = max(ans, arr[i] % arr[n]);
    cout << ans;
}

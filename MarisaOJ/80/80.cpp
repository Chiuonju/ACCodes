#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, l, r, arr[maxN];
int pairs;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> l >> r;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
    for (int i = 1; i <= n; ++i)
    {
        int left = lower_bound(arr + i + 1, arr + 1 + n, l - arr[i]) - arr ;
        int right = upper_bound(arr + i + 1, arr + 1 + n, r - arr[i]) - arr - 1;
        pairs += right - left + 1;
    }
    cout << pairs;
}

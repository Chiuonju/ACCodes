#include <bits/stdc++.h>
#include <functional>
#include <numeric>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, k;
int arr[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    cout << accumulate(arr + n - k + 1, arr + n + 1, 0);
}


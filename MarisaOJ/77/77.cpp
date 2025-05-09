#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, q;
int arr[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    while (q--)
    {
        int x;
        cin >> x;
        if (x >= arr[1])
            cout << (upper_bound(arr + 1, arr + n + 1, x) - arr) - 1 << '\n';
        else cout << -1 << '\n';
    }
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arr[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= 2 * n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + n + 1);
    sort(arr + n + 1, arr + 2 * n + 1, greater<int>());
    for (int i = 1; i <= 2 * n; ++i)
        cout << arr[i] << ' ';
}

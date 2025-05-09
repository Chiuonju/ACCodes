#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arr[maxN];
int ans = 1e9;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
    for (int i = 1; i <= n; ++i) 
    {
        ans = min(abs(arr[i] - arr[i - 1]), ans);
    }
    cout << ans;
}

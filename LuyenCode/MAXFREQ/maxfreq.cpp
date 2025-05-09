#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arr[maxN];
unordered_map<int, int> mp;
int ans, ans_times;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i], mp[arr[i]]++;
    for (int i = 1; i <= n; ++i)
    {
        if (mp[arr[i]] > ans_times)
            ans = arr[i], ans_times = mp[arr[i]];
    }
    cout << ans << ' ' << ans_times;
}


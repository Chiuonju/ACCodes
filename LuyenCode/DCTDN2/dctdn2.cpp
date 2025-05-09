#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

// TODO: Day con tang dai nhat

int n;
int a[maxN];
vector<int> dp;
int ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    dp.push_back(a[1]);
    for (int i = 2; i <= n; ++i)
    {
        auto it = upper_bound(begin(dp), end(dp), a[i]);
        if (it - dp.begin() == dp.size())
        {
            dp.push_back(a[i]);
        }
        else dp[it - dp.begin()] = a[i], dp.resize(it - dp.begin() + 1);
        ans = max(ans, (int) dp.size());
    }
    cout << ans;
}

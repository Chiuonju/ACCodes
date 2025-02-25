#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int n, m, a[maxn][maxn], k;
vector<int> nums;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n >> k;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if (j == k) nums.push_back(a[i][j]);
        }
    }
    sort(nums.rbegin(), nums.rend());
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j == k) cout << nums.back() << " ", nums.pop_back();
            else cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
}

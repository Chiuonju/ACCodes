#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = (int) 1e6 + 7;

int t, a[maxn], b[maxn], m, n;
vector<int> ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        for (int i = 1; i <= m; ++i)
            cin >> b[i];
        sort(a + 1, a + n + 1);
        sort(b + 1, b + m + 1);
        int i = 1, j = 1;
        while (i <= n && j <= m)
        {
            if (a[i] < b[j])
            {
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }
        while (i <= n)
            ans.push_back(a[i]), i++;
        while (j <= m)
            ans.push_back(b[j]), j++;
        for (auto &x : ans)
            cout << x << ' ';
        cout << '\n';
        ans.clear();
    }
}

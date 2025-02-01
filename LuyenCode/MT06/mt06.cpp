#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e3 + 7;

int n, m, x;
set<int> ans;

bool check (int n)
{
    int tmp = sqrt(n);
    return tmp * tmp == n;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> x;
            if (check(x)) ans.insert(x);
        }
    }
    for (auto &x : ans)
        cout << x << " ";
    if (!ans.size()) cout << "NOT FOUND";    
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], b[maxn];
vector<int> ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        cin >> b[i];
    int i = 1, j = 1;
    while (i <= n && j <= n)
    {
        if (a[i] < b[j])
            ans.push_back(a[i]), ++i;
        else ans.push_back(b[j]), ++j;
    }
    while (i <= n)
        ans.push_back(a[i]), ++i;
    while (j <= n)
        ans.push_back(b[j]), ++j;
    for (auto &x : ans)
        cout << x << " ";
}

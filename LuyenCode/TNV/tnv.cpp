#include <bits/stdc++.h>
#include <unordered_map>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a[maxn], n;
map<int, int> mp;
int height = 0, amount = 0;
Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i], mp[a[i]]++;
    for (auto &x : mp)
    {
        if (x.first > height && x.second >= amount)
        {
            height = x.first;
            amount = x.second;
        }
    }
    cout << height << ' ' << amount;
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arrA[maxN], arrB[maxN];
vector<pair<int, int>> pairs;

bool cmp (pair<int, int> x, pair<int, int> y)
{
    if (x.first == y.first)
        return x.second > y.second;
    return x.first < y.first;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arrA[i];
    for (int i = 1; i <= n; ++i)
        cin >> arrB[i];
    for (int i = 1; i <= n; ++i)
    {
        pairs.push_back({arrA[i], arrB[i]});
    }
    sort(pairs.begin(), pairs.end(), cmp);
    for (auto it : pairs)
        cout << it.first << " " << it.second << "\n";
}

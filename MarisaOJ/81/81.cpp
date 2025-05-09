#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, q;
vector<pair<long long, long long>> candies;

bool cmp (pair<long long, long long> x, pair<long long, long long> y)
{
    return x.second < y.second;
}

int lower(long long x)
{
    int left = 0, right = candies.size() - 1;
    while (right - left > 1)
    {
        int mid = (left + right) / 2;
        if (candies[mid].first >= x) right = mid;
        else left = mid;
    }
    return right;

}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    candies.push_back({0, 0});
    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        candies.push_back({x, y});
    }

    sort(begin(candies), end(candies), cmp);
    for (int i = 2; i <= candies.size(); ++i)
    {
        candies[i].first += candies[i - 1].first;
    }
    while (q--)
    {
        long long k;
        cin >> k;
        auto position = lower(k);
        cout << candies[position].second << "\n";
    }
}


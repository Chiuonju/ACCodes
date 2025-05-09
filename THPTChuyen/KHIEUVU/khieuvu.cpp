#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, k;
vector<int> boys, girls;
long long ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        if (x < 0)
            girls.push_back(abs(x));
        else boys.push_back(x);
    }
    sort(begin(girls), end(girls));
    for (auto it : boys)  
    {
        ans += upper_bound(begin(girls), end(girls), it) - lower_bound(begin(girls), end(girls), it - k);
    }
    cout << ans;
}

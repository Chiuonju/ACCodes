#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

pair<int, int> arr[maxN];
int n, k;

bool cmp (pair<int, int> a, pair<int, int> b)
{
    return 1.0 * a.first / a.second < 1.0 * b.first / b.second;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i].first;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i].second;
         
    sort(arr + 1, arr + n + 1, cmp);
    int ai = arr[k].first, bi = arr[k].second;
    int gcd = __gcd(ai, bi);
    if (ai % gcd == 0)
        ai /= gcd;
    if (bi % gcd == 0)
        bi /= gcd;
    cout << ai << " " << bi;
}

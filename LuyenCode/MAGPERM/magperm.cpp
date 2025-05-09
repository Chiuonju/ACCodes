#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, k;
int a[maxn], b[maxn];
set<int> se;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        if (i - k > 0 and se.find(i - k) == se.end()) 
            a[i] = i - k, se.insert(i - k);
        else if (i + k <= n and se.find(i + k) == se.end() ) a[i] = i + k, se.insert(i + k);
    }
    for (int i = 1; i <= n; ++i)
        if (a[i] < 1 or a[i] > n) return cout << -1, 0;
    for (int i = 1; i <= n; ++i)
        cout << a[i] << " ";

}

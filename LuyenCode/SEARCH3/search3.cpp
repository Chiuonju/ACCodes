#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, m, a[maxn], b[maxn];
unordered_map<int, int> mp;

int binarySearch(int a[], int n, int x)
{
    int l = 0, r = n;
    while (r - l > 1)
    {
        int m = l + (r - l) / 2;
        if (a[m] >= x) r = m;
        else l = m;
    }
    if (a[r] == x) return 1;
    else return 0;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (!mp.count(a[i]))
            mp[a[i]] = i;
    }
    for (int i = 1; i <= m; ++i)
    {
        cin >> b[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; ++i)
    {
       if (binarySearch(a, n, b[i])) 
       {
           cout << mp[b[i]];
       }
       else cout << 0;
       cout << " ";
    }
    
}

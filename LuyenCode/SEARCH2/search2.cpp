#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int a[maxn];
int Search(int a[], int x, int n)
{
    int l = 0, r = n;
    while (r - l > 1)
    {
        int m = l + r >> 1;
        if (a[m] >= x) r = m;
        else l = m;
    }
    if (a[r] == x) return r;
    else return 0;
}


Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i)
    {
        int x; cin >> x;
        cout << Search(a, x, n) << ' ';
    }
}

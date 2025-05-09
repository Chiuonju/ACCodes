#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, m;
int plug[maxN];
int numsOfSockets;
int minSockets = 1;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> plug[i];
    }
    sort(plug + 1, plug + n + 1);
    
    numsOfSockets += plug[n];
    for (int i = n - 1; i >= 1; --i)
    {
        if (numsOfSockets >= m) 
            break;
        numsOfSockets += plug[i] - 1;
        minSockets++;
    }
    if (m == 1) minSockets = 0;
    if (numsOfSockets < m)
        cout << -1;
    else cout << minSockets;
}

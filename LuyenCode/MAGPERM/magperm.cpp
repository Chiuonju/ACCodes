#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, k;
int a[maxn], b[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> k;
    for (int i = 1; i <= n; ++i) 
    {
        a[i] = i;
    }
    for (int i = 1; i <= n; ++i)
    {
        if ((i + k) % n == 0) b[n] = a[i];
        else b[(i + k) % n ] = a[i];
    }
    
   for (int i = 1; i <= n; ++i)
    {
        if (abs(a[i] - b[i]) != k) 
        {
            cout << -1;
            return 0;
        }
    } 
    for(int i = 1; i <= n; ++i)
    {
        cout << b[i] << ' ';
    }
 }

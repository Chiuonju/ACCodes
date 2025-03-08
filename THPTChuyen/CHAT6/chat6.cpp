#include <bits/stdc++.h>
#include <unordered_set>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, a[maxn], x;
unordered_set<int> se;
int ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i]; 
    } 
    cin >> x;
    for (int i = 1; i <= n; ++i)
    {
        if (se.find(x - a[i]) != se.end())
            ans++;
        se.insert(a[i]); 
    }
    cout << ans;
}

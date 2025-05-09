#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int arr[maxN];
map<int, int> mp;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i], mp[arr[i]]++;
    for (auto &it : mp) 
    {
        if (it.second & 1)
            return cout << it.first, 0;
    }
}

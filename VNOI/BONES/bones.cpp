#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int s1, s2, s3;
map<int, int> mp;
int ans, appearance;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; ++i)
    {
        for (int j = 1;  j <= s2; ++j)
        {
            for (int k = 1; k <= s3; ++k)
            {
                mp[i + j + k]++;
            }
        }
    }
    for (auto &it : mp)
    {
        if (appearance < it.second)
        {
            ans = it.first;
            appearance = it.second;
        }
    }
    cout << ans;
}

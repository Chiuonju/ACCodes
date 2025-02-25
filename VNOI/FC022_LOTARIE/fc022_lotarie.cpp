#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

string s;
int ans = 0;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();
    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == s[i + 1])
        {
            int cnt = 1;
            while (s[i] == s[i + 1])
                cnt++, ++i;
            ans += cnt >> 1;
        }
    }
    cout << ans;
}

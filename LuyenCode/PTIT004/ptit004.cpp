#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

string s;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> s;
    while (s.size() > 1)
    {
        int sum = 0;
        for (auto &x  : s)
        {
            sum += x - '0';
        }
        s = to_string(sum);
    }
    cout << s;
}

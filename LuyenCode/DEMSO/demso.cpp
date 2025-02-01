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
    int cnt = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (isdigit(s[i]))
        { 
            while (isdigit(s[i]))
            {
                i++;
            }
            cnt++; 
        }
    }
    cout << cnt;
}

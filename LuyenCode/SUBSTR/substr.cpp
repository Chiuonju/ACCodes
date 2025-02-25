#include <bits/stdc++.h>
#define Chiuonju signed main
#define NAME ""
using namespace std;

const int maxn = 2e3 + 7;

string s1, s2;
int dp[maxn][maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> s1;
    cin >> s2;
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    for (int i = 1; i <= s1.size(); ++i)
    {
        dp[i][0] = 0;
        for (int j = 1; j <= s2.size(); ++j)
        {
            dp[0][j] = 0;
            if (s1[i] == s2[j])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else 
                dp[i][j] = max({dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1]});

        }
    }
    cout << dp[s1.size() - 1][s2.size() - 1];

}

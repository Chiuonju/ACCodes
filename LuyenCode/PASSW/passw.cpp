#include <bits/stdc++.h>
#include <cctype>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int len = min(5, max((int) str.length() - 5, 0));
        bool check_capital = false, check_lower = false, check_num = false;
        for (auto it : str) 
        {
            if (isupper(it))
                check_capital = true;
            if (islower(it))
                check_lower = true;
            if (isdigit(it))
                check_num = true;
        }
        int sum = check_capital + check_lower + check_num; 
        if (sum <= 2)
            cout << len + sum;
        else cout << len + 5;
        cout << ' ';

    }
}

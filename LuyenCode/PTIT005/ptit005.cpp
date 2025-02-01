#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

long long n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    int sum = 0;
    string s = to_string(n);
    for (int i = 0; i < s.size(); ++i)
        sum += s[i] - '0';
    if (n % sum == 0)
        cout << "YES";
    else cout << "NO";
}

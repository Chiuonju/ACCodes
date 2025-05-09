#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

bool isPrime(int n)
{
    for (int i = 2; 1ll * i * i <= n; ++i)
        if (n % i == 0) return false;
    return n > 1;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        if (isPrime(i))
            str[i] = '*';
    }
    cout << str;
}

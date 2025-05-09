#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int odd_sum, even_sum;
string n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (auto &it : n)
    {
        if (it & 1)
            odd_sum += it - '0';
        else even_sum += it - '0';
    }
    cout << even_sum <<  '\n' << odd_sum;
}

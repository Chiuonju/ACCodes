#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int k;

bool check (int x)
{
    return x % 3 == 0 || x % 5 == 0 || x % 7 == 0;
}


Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> k;
    int left = 0, right = 1e9;
    while (right - left > 1)
    {
        int mid = (left + right) / 2;
        if (check(mid)) right = mid;
        else left = mid;
    }
    cout << left;
}



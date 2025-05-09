#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int l, r;
int ans;

bool is_prime(int n)
{
    for (int i = 2; 1ll * i * i <= n; ++i)
        if (n % i == 0) return false;
    return n > 1;
}

bool check (int n)
{
    int sum = 0;
    string s = to_string(n);
    for (auto &it : s)
        sum += it - '0';
    if (is_prime(sum)) 
        return true;
    return false;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> l >> r;
    for (int i = l + 1; i <= r; ++i)
        ans += check(i);
    cout << ans;
}

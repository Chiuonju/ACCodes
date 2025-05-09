#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int sum;

bool is_prime(int n)
{
    for (int i = 2; 1ll * i * i <= n; ++i)
        if (n % i == 0) return false;
    return n > 1;
}

void sum_n(int n)
{
    if (!n)
        return;
    sum_n(n / 10);
    sum += n % 10;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    sum_n(n);
    if (is_prime(n) and is_prime(sum))
        cout << "YES";
    else cout << "NO";
}

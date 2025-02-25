#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int t;
int prime[maxn];
int pre[maxn];

void sieve()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; 1ll * i * i <= maxn; ++i)
    {
        if (!prime[i])
            for (int j = i * i; j <= maxn; j += i)
            {
                prime[j] = 1;
            }
    }
}

void calc()
{
    for (int i = 1; i <= maxn; ++i)
    {
        if (!prime[i])
        {
            pre[i] = pre[i - 1] + 1;
        }
        else pre[i] = pre[i - 1];
    }
} 

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    sieve();
    calc();
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n";
    }
}

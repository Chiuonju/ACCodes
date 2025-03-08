#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int n, q, a[maxn];
int S[maxn], SS[maxn], SG[maxn];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] == 1)
            S[i] = S[i - 1] + 1;
        else S[i] = S[i - 1];
        if (a[i] == 2)
            SS[i] = SS[i - 1] + 1;
        else SS[i] = SS[i - 1];
        if (a[i] == 3)
            SG[i] = SG[i - 1] + 1;
        else SG[i] = SG[i - 1];
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << S[r] - S[l - 1] << ' ' << SS[r] - SS[l - 1] << ' ' << SG[r] - SG[l - 1] << '\n';
    }
}

#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int tmp[maxN];
int x;
vector<int> a;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> tmp[i];
    cin >> x;
    bool placed = false;
    if (x < tmp[0])
        cout << x << " ", placed = true;
    for (int i = 0; i < n; ++i)
    {
        a.push_back(tmp[i]);
        if (x <= tmp[i + 1] and !placed)
            a.push_back(x), placed = true;
    }
    for (auto it : a)
        cout << it << " ";
    if (x > tmp[n - 1])
        cout << x << " ";
}

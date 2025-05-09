#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n, q;
vector<int> arr[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        arr[x].push_back(i);
    }
    while (q--)
    {
        int left, right, num;
        cin >> left >> right >> num;
        int up = upper_bound(arr[num].begin(), arr[num].end(), right) - arr[num].begin();
        int down = lower_bound(arr[num].begin(), arr[num].end(), left) - arr[num].begin();
        cout << up - down << '\n';
    }

}

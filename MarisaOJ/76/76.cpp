#include <algorithm>
#include <bits/stdc++.h>
#define Chiuonju signed main
#define NAME "trees"

using namespace std;

const int maxN = 1e6 + 7;

int n, q;
int arr[maxN];

int Search (int x)
{
    int left = 1, right = n;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) right = mid - 1;
        else left = mid + 1;
    }
    if (arr[left] == x) return left;
    return -1;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; ++i)
        cin >> arr[i];
    while (q--)
    {
        int x;
        cin >> x;
        cout << Search(x) << '\n';
    }
}


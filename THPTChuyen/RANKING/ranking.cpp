#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
int Rank[maxN];
long long scores;
long long sumOfScores;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> Rank[i];
    sort(Rank + 1, Rank + n + 1, greater<int>());
    for (int i = 1; i <= n; ++i)
    {
        if (Rank[i] != Rank[i - 1])
            scores++;
        sumOfScores += scores;
    }
    cout << sumOfScores;
}

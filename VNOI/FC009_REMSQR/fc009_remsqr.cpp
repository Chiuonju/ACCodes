#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e2 + 7;

int n, m;
char grid[maxN][maxN];
bool visited[maxN][maxN];
int pieces;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

// u+1 v+0
// u-1 v+0
// u+0 v+1
// u+0 v-1
void DFS (int u, int v)
{
    visited[u][v] = 1;
    for (int i = 0; i < 4; ++i) 
    {
        int x = u + dx[i], y = v + dy[i];
        if (grid[x][y] == '#' && x >= 1 && x <= m && y >= 1 && y <= n && !visited[x][y])
            DFS(x, y);
    }
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> m >> n;
    for (int i = 1; i <= m; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> grid[i][j];
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
            if (grid[i][j] == '#' && !visited[i][j])
                DFS(i, j), pieces++;
    }
    cout << pieces;
}

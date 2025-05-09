#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int vertices, edges;
vector<int> adj[maxN];
bool visited[maxN];

void DFS (int u)
{
    visited[u] = 1;
    for (auto v : adj[u])
        if (!visited[v]) DFS(v);
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> vertices >> edges;
    if (vertices - 1!= edges) return cout << "NO", 0;
    for (int i = 1; i <= edges; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(1);   
    
    for (int i = 1; i <= vertices; ++i)
        if (!visited[i]) return cout << "NO", 0;
    cout << "YES";
}

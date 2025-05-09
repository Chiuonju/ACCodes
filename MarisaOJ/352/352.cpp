#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int vertices;
int vertices_count[maxN];

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> vertices;
    for (int i = 1; i < vertices; ++i)
    {
        int u, v;
        cin >> u >> v;
        vertices_count[u]++;
        vertices_count[v]++;
    }
    if (vertices == 1 || vertices == 2) 
        cout << 1;
    else cout << count(vertices_count + 1, vertices_count + 1 + vertices, 1);
}

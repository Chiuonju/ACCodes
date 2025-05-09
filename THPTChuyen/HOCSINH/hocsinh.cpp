#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

int n;
vector<pair<string, pair<int, int>>> students;

bool cmp (pair<string, pair<int, int>> x, pair<string, pair<int, int>> y)
{
    if (x.first == y.first)
    {
        if (x.second.first + x.second.second == y.second.first + y.second.second)
            return x.second.first < y.second.first;
        else return x.second.first + x.second.second < y.second.first + y.second.second;
    }
    else 
        return x.first < y.first;
}

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        string name;
        int mathMarks, ITMarks;
        cin >> name >> mathMarks >> ITMarks;
        students.push_back({name, {mathMarks, ITMarks}});
    }
    sort(begin(students), end(students), cmp);
    for (auto it : students)
    {
        cout << it.first << ' ' << it.second.first << ' ' << it.second.second << "\n";
    }
}


#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

int t;
string s;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        stringstream ss(s);
        string token;
        while (ss >> token)
        {
            cout << token << " ";
        }
        cout << '\n';
    }

}

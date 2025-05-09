#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

string n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    if (n.size() == 1)
        n = "00" + n;
    if (n.size() == 2) 
        n = "0" + n;
    int len = n.size();
        cout << n[len - 3] << n[len - 2] << n[len - 1];

}

#include <bits/stdc++.h>
#include <unordered_map>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e9 + 7;

string s;
unordered_map<char, int> mp;
string ans;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> s;
    for (int i = 0; i < s.size(); ++i)
    {
        if (!mp.count(s[i]))
           ans.push_back(s[i]); 
        mp[s[i]]++;
    }
    for (auto &x : ans)
        cout << x;
}

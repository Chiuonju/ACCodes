#include <bits/stdc++.h>
#include <cctype>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

string s;
vector<int> nums;
int sum;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i)
    {
        
        if (isdigit(str[i])) 
            sum += str[i] - '0';
        if (isalpha(str[i]))
            s += str[i];
    }
    cout << s << sum;
}

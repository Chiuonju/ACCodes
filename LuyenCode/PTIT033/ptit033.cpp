#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxN = 1e6 + 7;

long long a, b, n;

Chiuonju()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    cin >> n;
    cin >> a >> b;
    if (n % a == 0 and n % b == 0)
        cout << "Co, tat ca!";
    if (n % a == 0 and n % b != 0)
        cout << "Chi chia het cho " << a << ".";
    if (n % a != 0 and n % b == 0)
        cout << "Chi chia het cho " << b << ".";
    if (n % a != 0 and n % b != 0)
        cout << "Khong chia het cho so nao ca.";
}

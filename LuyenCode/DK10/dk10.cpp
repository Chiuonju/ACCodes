#include <bits/stdc++.h>
#define Chiuonju signed main

using namespace std;

const int maxn = 1e6 + 7;

int month, year;

Chiuonju() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

	cin >> month >> year;
	int a[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if ((month <= 12 && month > 0) && year > 0)
	{
		if (month == 2) 
		{
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year % 100 == 0))
			{

				cout << 29;
			}
			else cout << 28;	
		}
		else 
			cout << a[month - 1];
	}
	else cout << "INVALID";
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, x;
	cin >> a >> b >> x;

	long long res = b / x - a / x;
	if (a % x == 0)
	{
		cout << res + 1 << endl;
	}
	else
	{
		cout << res << endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b, x;
	cin >> a >> b >> x;

	long long tmp = b;
	for (long long i = b; i >= a; i--)
	{
		if (i % x == 0)
		{
			tmp = i;
			break;
		}
	}

	long long tmp1 = a;
	for (long long i = a; i <= b; i++)
	{
		if (i % x == 0)
		{
			tmp1 = i;
			break;
		}
	}

	// cout << tmp / x << a / x << endl;
	long long res = (tmp / x) - (tmp1 / x);
	if (res > 0)
	{
		cout << res + 1 << endl;
	}
	else
	{
		cout << res << endl;
	}
}

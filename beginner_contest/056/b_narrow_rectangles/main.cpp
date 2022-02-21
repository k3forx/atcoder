#include <bits/stdc++.h>
using namespace std;

int main()
{
	int w, a, b;
	cin >> w >> a >> b;

	int res = 0;
	if (b > a)
	{
		res = b - a - w;
	}
	if (a > b)
	{
		res = a - b - w;
	}

	if (res >= 0)
	{
		cout << res << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
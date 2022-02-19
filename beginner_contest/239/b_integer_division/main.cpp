#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long X;
	cin >> X;
	// cout << X << endl;

	long long div = X / 10;
	if (X >= 0)
	{
		cout << div << endl;
		return 0;
	}
	else
	{
		if (div * 10 == X)
		{
			cout << div << endl;
			return 0;
		}
		else
		{
			cout << div - 1 << endl;
			return 0;
		}
	}
}
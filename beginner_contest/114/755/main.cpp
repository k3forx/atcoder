#include <bits/stdc++.h>
using namespace std;

int func(string i)
{
	if (i.size() <= 2)
	{
		return 0;
	}

	int num = stol(i);
	return 1;
}

int main()
{
	int n;
	cin >> n;

	if (n < 357)
	{
		cout << 0 << endl;
		return 0;
	}

	cout << n << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int abs = 1000000000;
	for (int i = 0; i < s.size() - 2; i++)
	{
		int num = stol(s.substr(i, 3));

		int tmp = 0;
		if (num >= 753)
		{
			tmp = num - 753;
		}
		else
		{
			tmp = 753 - num;
		}

		if (tmp < abs)
		{
			abs = tmp;
		}
	}

	cout << abs << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string N;
	cin >> N;

	int digits = N.size();

	bool canDivide = false;
	int res = digits;
	for (int bit = 0; bit < (1 << digits); bit++)
	{
		string tmp = "";
		for (int i = 0; i < digits; i++)
		{
			if (bit & (1 << i))
			{
				tmp.push_back(N.at(i));
			}
		}

		if (tmp.size() > 0)
		{
			int r = digits - tmp.size();
			if ((stol(tmp) % 3 == 0) & (r < res))
			{
				res = r;
				canDivide = true;
			}
		}
	}

	if (canDivide)
	{
		cout << res << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}

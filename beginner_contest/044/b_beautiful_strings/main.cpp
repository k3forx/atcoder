#include <bits/stdc++.h>
using namespace std;

int main()
{
	string w;
	cin >> w;

	bool isBeautiful = true;
	for (int i = 0; i < w.size(); i++)
	{
		char s = w.at(i);
		int cnt = 0;
		for (int j = 0; j < w.size(); j++)
		{
			if (w.at(j) == s)
			{
				cnt++;
			}
		}
		if (cnt % 2 != 0)
		{
			isBeautiful = false;
		}
	}

	if (isBeautiful)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;

	string res = "";
	for (int i = 0; i < s.size(); i++)
	{
		char op = s.at(i);
		if (op == 'B' & res.size() > 0)
		{
			string tmp = "";
			for (int j = 0; j < res.size() - 1; j++)
			{
				tmp = tmp + res.at(j);
			}
			res = tmp;
		}

		if (op == '0')
		{
			res = res + "0";
		}

		if (op == '1')
		{
			res = res + "1";
		}

		// cout << "op: " << op << ", res: " << res << endl;
	}
	cout << res << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, t;
	cin >> s >> t;

	int m = 0;
	for (int i = 0; i <= s.size() - t.size(); i++)
	{
		int cnt = 0;
		for (int j = 0; j < t.size(); j++)
		{
			if (s.at(i + j) == t.at(j))
			{
				cnt++;
			}
		}

		if (cnt >= m)
		{
			m = cnt;
		}
	}

	cout << t.size() - m << endl;
}

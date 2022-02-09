#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;

	int max = 0, x = 0;
	for (int i = 0; i < S.size(); i++)
	{
		if (S.at(i) == 'I')
		{
			x = x + 1;
		}
		else
		{
			x = x - 1;
		}

		if (x > max)
		{
			max = x;
		}
	}

	cout << max << endl;
}

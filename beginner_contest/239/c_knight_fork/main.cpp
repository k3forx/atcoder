#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	// cout << x1 << y1 << x2 << y2 << endl;

	vector<vector<long long> > move(8, vector<long long>(2));

	move.at(0).at(0) = 1;
	move.at(0).at(1) = 2;

	move.at(1).at(0) = 2;
	move.at(1).at(1) = 1;

	move.at(2).at(0) = 2;
	move.at(2).at(1) = 1;

	move.at(3).at(0) = 1;
	move.at(3).at(1) = -2;

	move.at(4).at(0) = -1;
	move.at(4).at(1) = -2;

	move.at(5).at(0) = -2;
	move.at(5).at(1) = -1;

	move.at(6).at(0) = -2;
	move.at(6).at(1) = 1;

	move.at(7).at(0) = -1;
	move.at(7).at(1) = 2;

	bool res = false;
	for (int i = 0; i < move.size(); i++)
	{
		long long x1Cand = x1 + move.at(i).at(0);
		long long y1Cand = y1 + move.at(i).at(1);
		for (int j = 0; j < move.size(); j++)
		{
			long long x2Cand = x2 + move.at(j).at(0);
			long long y2Cand = y2 + move.at(j).at(1);

			if ((x1Cand == x2Cand) & (y1Cand == y2Cand))
			{
				res = true;
				break;
			}
		}
	}

	if (res)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
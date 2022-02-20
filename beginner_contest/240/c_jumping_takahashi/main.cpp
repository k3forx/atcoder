#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;

	vector<vector<int> > ab(N, vector<int>(2));
	for (int i = 0; i < N; i++)
	{
		cin >> ab.at(i).at(0) >> ab.at(i).at(1);
	}

	bool canJump = false;
	for (int bit = 0; bit < (1 << N); bit++)
	{
		int dist = 0;
		for (int i = 0; i < N; i++)
		{
			if (bit & (1 << i))
			{
				dist = dist + ab.at(i).at(0);
				// cout << "bit: " << bit << ", i: " << i << endl;
			}
			else
			{
				dist = dist + ab.at(i).at(1);
			}

			if (dist > X)
			{
				break;
			}
		}
		// cout << "dist: " << dist << endl;
		if (dist == X)
		{
			canJump = true;
			break;
		}
	}

	if (canJump)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
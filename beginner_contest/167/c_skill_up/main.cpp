#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M, X;
	cin >> N >> M >> X;

	vector<vector<int> > mat(N, vector<int>(M));
	vector<int> cost(N);

	int money = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> cost.at(i);
		money = money + cost.at(i);
		for (int j = 0; j < M; j++)
		{
			cin >> mat.at(i).at(j);
		}
	}

	bool isOK = false;
	for (int bit = 0; bit < (1 << N); bit++)
	{
		// which books we select: 0 -> don't select
		vector<int> select(N, 0);
		for (int i = 0; i < N; i++)
		{
			if (bit & (1 << i))
			{
				// select
				select.at(i) = 1;
			}
		}

		vector<int> und(M, 0);
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N; j++)
			{
				und.at(i) = und.at(i) + mat.at(j).at(i) * select.at(j);
			}
		}

		bool canLearn = true;
		for (int i = 0; i < M; i++)
		{
			if (und.at(i) < X)
			{
				canLearn = false;
			}
		}

		int res = 0;
		if (canLearn)
		{
			for (int i = 0; i < N; i++)
			{
				res = res + cost.at(i) * select.at(i);
			}
			if (res < money)
			{
				money = res;
			}
			isOK = true;
		}
	}

	if (isOK)
	{
		cout << money << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int> > cond(M, vector<int>(2));
	for (int i = 0; i < M; i++)
	{
		cin >> cond.at(i).at(0) >> cond.at(i).at(1);
	}

	int K;
	cin >> K;

	vector<vector<int> > person(K, vector<int>(2));
	for (int i = 0; i < K; i++)
	{
		cin >> person.at(i).at(0) >> person.at(i).at(1);
	}

	int res = 0;
	for (int bit = 0; bit < (1 << K); bit++)
	{
		vector<int> select(K, 0);
		for (int i = 0; i < K; i++)
		{
			// デフォルトでは左側の皿を選ぶとする
			select.at(i) = person.at(i).at(0);
			if (bit & (1 << i))
			{
				// この条件に引っかかる場合は右側の皿を選ぶとする
				select.at(i) = person.at(i).at(1);
			}
		}

		int tmp = 0;
		for (int i = 0; i < M; i++)
		{
			bool hasLeft = false;
			bool hasRight = false;

			int d1 = cond.at(i).at(0);
			int d2 = cond.at(i).at(1);

			for (int j = 0; j < K; j++)
			{
				if (d1 == select.at(j))
				{
					hasLeft = true;
				}
				if (d2 == select.at(j))
				{
					hasRight = true;
				}
			}

			if (hasLeft & hasRight)
			{
				tmp++;
			}
		}

		if (tmp > res)
		{
			res = tmp;
		}
	}
	cout << res << endl;
}

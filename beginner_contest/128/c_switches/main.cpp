#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<int> k(M);
	vector<vector<int> > cond(M, vector<int>(N));
	vector<int> p(M);

	for (int i = 0; i < M; i++)
	{
		cin >> k.at(i);
		// cout << k.at(i) << endl;
		for (int j = 0; j < k.at(i); j++)
		{
			cin >> cond.at(i).at(j);
			// cout << cond.at(i).at(j) << endl;
		}
	}

	for (int i = 0; i < M; i++)
	{
		cin >> p.at(i);
		// cout << p.at(i) << endl;
	}

	// cout << "-----" << endl;

	int res = 0;
	for (int bit = 0; bit < (1 << N); bit++)
	{
		// select off
		vector<int> select(N, 0);
		for (int i = 0; i < N; i++)
		{
			if (bit & (1 << i))
			{
				// cout << "bit: " << bit << ", i: " << i << endl;
				select.at(i) = 1;
			}
		}

		int cnt = 0;
		for (int i = 0; i < M; i++)
		{
			int sum = 0;
			for (int j = 0; j < k.at(i); j++)
			{
				int index = cond.at(i).at(j);
				// cout << "i: " << i << ", j: " << j << ", select: " << select.at(index - 1) << endl;
				sum = sum + select.at(index - 1);
			}

			// cout << "i: " << i << ", sum: " << sum << endl;

			if (sum % 2 == p.at(i))
			{
				cnt++;
			}
		}

		if (cnt == M)
		{
			res++;
		}

		// cout << "cnt: " << cnt << endl;
	}

	cout << res << endl;
}

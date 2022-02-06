#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> seq(N);
	for (int i = 0; i < N; i++)
	{
		cin >> seq.at(i);
	}

	sort(seq.begin(), seq.end());
	vector<vector<int> > res(seq.at(N - 1), vector<int>(2));

	for (int k = 2; k <= seq.at(N - 1); k++)
	{
		int cnt = 0;
		for (int i = 0; i < seq.size(); i++)
		{
			if (seq.at(i) % k == 0)
			{
				cnt++;
			}
		}
		res.at(k - 2).at(0) = k;
		res.at(k - 2).at(1) = cnt;
	}

	int m = 0;
	for (int i = 0; i < seq.at(N - 1); i++)
	{
		if (res.at(i).at(1) > m)
		{
			m = res.at(i).at(1);
		}
	}

	for (int i = 0; i < seq.at(N - 1); i++)
	{
		if (res.at(i).at(1) == m)
		{
			cout << res.at(i).at(0) << endl;
			break;
		}
	}
}

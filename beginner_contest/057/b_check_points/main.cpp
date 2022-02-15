#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<vector<int> > stu(N, vector<int>(2));
	for (int i = 0; i < N; i++)
	{
		cin >> stu.at(i).at(0) >> stu.at(i).at(1);
	}

	vector<vector<int> > p(M, vector<int>(2));
	for (int i = 0; i < M; i++)
	{
		cin >> p.at(i).at(0) >> p.at(i).at(1);
	}

	// cout << "-----" << endl;

	for (int i = 0; i < N; i++)
	{
		int max = 2 * pow(10, 8);
		int res = 1;
		for (int j = 0; j < M; j++)
		{
			int dis = abs(stu.at(i).at(0) - p.at(j).at(0)) + abs(stu.at(i).at(1) - p.at(j).at(1));
			// cout << "dis: " << dis << ", max: " << max << endl;
			if (dis < max)
			{
				res = j + 1;
				max = dis;
			}
		}
		cout << res << endl;
	}
}
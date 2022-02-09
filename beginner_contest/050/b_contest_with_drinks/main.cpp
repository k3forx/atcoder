#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> t(N);
	for (int i = 0; i < N; i++)
	{
		cin >> t.at(i);
	}

	int M;
	cin >> M;

	vector<vector<int> > px(M, vector<int>(2));
	for (int i = 0; i < M; i++)
	{
		cin >> px.at(i).at(0) >> px.at(i).at(1);
	}

	// cout << "-----" << endl;

	for (int i = 0; i < M; i++)
	{
		int s = 0;
		int loc = px.at(i).at(0) - 1;
		// cout << loc << endl;
		// t.at(loc) = px.at(i).at(1);

		for (int j = 0; j < N; j++)
		{
			if (j == loc)
			{
				s = s + px.at(i).at(1);
			}
			else
			{
				s = s + t.at(j);
			}
		}

		cout << s << endl;
	}
}

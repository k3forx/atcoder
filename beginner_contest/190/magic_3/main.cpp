#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, S, D;
	cin >> N >> S >> D;

	vector<vector<int> > mat(N, vector<int>(2));
	for (int i = 0; i < N; i++)
	{
		cin >> mat.at(i).at(0) >> mat.at(i).at(1);
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		if (mat.at(i).at(0) < S && mat.at(i).at(1) > D)
		{
			cnt = cnt + 1;
			break;
		}
	}

	if (cnt > 0)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

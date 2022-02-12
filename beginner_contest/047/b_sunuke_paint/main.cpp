#include <bits/stdc++.h>
using namespace std;

int main()
{
	int W, H, N;
	cin >> W >> H >> N;

	vector<vector<int> > mat(N, vector<int>(3));
	for (int i = 0; i < N; i++)
	{
		cin >> mat.at(i).at(0) >> mat.at(i).at(1) >> mat.at(i).at(2);
	}

	// cout << "-----" << endl;

	int a1 = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp = 0;
		if (mat.at(i).at(2) == 1)
		{
			tmp = mat.at(i).at(0);
		}
		if (tmp > a1)
		{
			a1 = tmp;
		}
	}

	int a2 = W;
	for (int i = 0; i < N; i++)
	{
		int tmp = W;
		if (mat.at(i).at(2) == 2)
		{
			tmp = mat.at(i).at(0);
		}
		if (tmp < a2)
		{
			a2 = tmp;
		}
	}

	int a3 = 0;
	for (int i = 0; i < N; i++)
	{
		int tmp = 0;
		if (mat.at(i).at(2) == 3)
		{
			tmp = mat.at(i).at(1);
		}
		if (tmp > a3)
		{
			a3 = tmp;
		}
	}

	int a4 = H;
	for (int i = 0; i < N; i++)
	{
		int tmp = H;
		if (mat.at(i).at(2) == 4)
		{
			tmp = mat.at(i).at(1);
		}
		if (tmp < a4)
		{
			a4 = tmp;
		}
	}

	if ((a2 - a1) > 0 & (a4 - a3) > 0)
	{
		cout << (a2 - a1) * (a4 - a3) << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}

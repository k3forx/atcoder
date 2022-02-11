#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W, K;
	cin >> H >> W >> K;

	vector<vector<char> > mat(H, vector<char>(W));
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> mat.at(i).at(j);
			// cout << mat.at(i).at(j);
		}
		// cout << endl;
	}

	// cout << "-----" << endl;
	int res = 0;
	for (int bit = 0; bit < (1 << (H + W)); bit++)
	{
		int cnt = 0;
		vector<vector<char> > tmp = mat;
		for (int i = 0; i < (H + W); i++)
		{
			if (bit & (1 << i))
			{
				// cout << "bit: " << bit << ", i: " << i << endl;
				// remove line
				// if i = 0, 1, then remove rows
				// if i = 2, 3, 4, the remove columns
				if (i <= H - 1)
				{
					for (int k = 0; k < W; k++)
					{
						tmp.at(i).at(k) = '.';
					}
				}
				else
				{
					for (int k = 0; k < H; k++)
					{
						tmp.at(k).at(i - H) = '.';
					}
				}
			}
		}

		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				char el = tmp.at(i).at(j);
				if (el == '#')
				{
					cnt++;
				}
			}
		}

		if (cnt == K)
		{
			res++;
		}
	}

	cout << res << endl;
}

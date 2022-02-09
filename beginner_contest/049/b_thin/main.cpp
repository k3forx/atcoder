#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;

	vector<vector<char> > pic(H, vector<char>(W));
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> pic.at(i).at(j);
			// cout << pic.at(i).at(j);
		}
		// cout << endl;
	}

	// cout << "-----" << endl;

	for (int i = 0; i < 2 * H; i++)
	{
		// i = 0, 1, 2, 3
		// i = 0, 0, 1, 1

		// i = 0, 1, 2, 3, 4, 5
		// i = 0, 0, 1, 1, 2, 2
		for (int j = 0; j < W; j++)
		{
			int iLoc = i / 2;
			// if (iLoc > 0)
			// {
			// 	iLoc = iLoc - 1;
			// }
			cout << pic.at(iLoc).at(j);
		}
		cout << endl;
	}
}

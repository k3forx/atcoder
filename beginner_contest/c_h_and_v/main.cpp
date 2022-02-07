#include <bits/stdc++.h>
using namespace std;

int main()
{
	int H, W, K;
	cin >> H >> W >> K;

	vector<vector<string> > mat(H, vector<string>(W));
	for (int i = 0; i < H; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cin >> mat.at(i).at(j);
			cout << mat.at(i).at(j) << endl;
		}
	}
}

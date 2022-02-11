#include <bits/stdc++.h>
using namespace std;

int main()
{

	int H,
		W, X, Y;
	cin >> H >> W >> X >> Y;

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

	// X, Y
	// left: X, Y - 1 -> X - 1, Y - 2
	// right: X, Y + 1 -> X - 1, Y
	// up: X - 1, Y -> X - 2, Y - 1
	// down: X + 1, Y -> X, Y - 1

	// cout << "-----" << endl;
	int res = 0;
	// 左
	for (int j = Y - 2; j >= 0; j--)
	{
		char el = mat.at(X - 1).at(j);
		if (el == '.')
		{
			res++;
		}
		else
		{
			break;
		}
	}

	// cout << "left: " << res << endl;

	// 右
	for (int j = Y; j < W; j++)
	{
		// cout << "i: " << i << endl;
		char el = mat.at(X - 1).at(j);
		if (el == '.')
		{
			res++;
		}
		else
		{
			break;
		}
	}

	// cout << "right: " << res << endl;

	// 上
	for (int i = X - 2; i >= 0; i--)
	{
		char el = mat.at(i).at(Y - 1);
		if (el == '.')
		{
			res++;
		}
		else
		{
			break;
		}
	}

	// cout << "up: " << res << endl;

	// 下
	for (int i = X; i < H; i++)
	{
		char el = mat.at(i).at(Y - 1);
		if (el == '.')
		{
			res++;
		}
		else
		{
			break;
		}
	}

	cout << res + 1 << endl;
}

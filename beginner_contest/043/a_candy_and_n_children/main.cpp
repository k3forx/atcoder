#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K, X, Y;
	cin >> N >> K >> X >> Y;

	int cost = 0;
	for (int i = 1; i <= N; i++)
	{
		if (i <= K)
		{
			cost = cost + X;
		}
		else
		{
			cost = cost + Y;
		}
	}

	cout << cost << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	vector<string> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a.at(i);
	}

	vector<string> b(M);
	for (int i = 0; i < M; i++)
	{
		cin >> b.at(i);
	}

	// cout << "------" << endl;

	int res = 0;
	for (int y = 0; y <= (N - M); y++)
	{
		for (int x = 0; x <= (N - M); x++)
		{
			int cnt = 0;
			for (int i = 0; i < M; i++)
			{
				// cout << a.at(y + i).substr(x, M) << endl;
				// cout << b.at(i) << endl;
				// cout << (b.at(i) == a.at(y + i).substr(x, M)) << endl;
				if (b.at(i) == a.at(y + i).substr(x, M))
				{
					cnt++;
				}
			}

			// cout << cnt << endl;
			// cout << endl;

			if (cnt > res)
			{
				res = cnt;
			}
		}
	}

	if (res == M)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
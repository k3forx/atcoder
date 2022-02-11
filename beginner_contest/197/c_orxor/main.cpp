#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<long long> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a.at(i);
	}

	cout << "-----" << endl;

	long long res = 1LL << 60;
	for (int bit = 0; bit < (1 << N); bit++)
	{
		for (int i = 0; i < N; i++)
		{
			if (bit & 1 << i)
			{
				cout << "bit: " << bit << ", i: " << i << endl;
			}
		}
	}

	cout << res << endl;
}

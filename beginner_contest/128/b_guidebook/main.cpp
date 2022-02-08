#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<int> > res(N, vector<int>(2));
	for (int i = 0; i < N; i++)
	{
		cin >> res.at(i).at(0) >> res.at(i).at(1);
	}
}

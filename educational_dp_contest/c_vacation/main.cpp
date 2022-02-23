#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<vector<int> > abc(N, vector<int>(3));
	for (int i = 0; i < N; i++)
	{
		cin >> abc[i].at(0) >> abc[i].at(1) >> abc[i].at(2);
	}
}
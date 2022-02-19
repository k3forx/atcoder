#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int N, M;
	cin >> N >> M;
	// cout << "N: " << N << ", M: " << M << endl;

	// cout << "-----" << endl;

	if (N * 2 > M)
	{
		cout << N << endl;
		return 0;
	}

	cout << (M - 2 * N) / 4 + N << endl;
}
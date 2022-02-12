#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int res = K;
	for (int i = 1; i < N; i++)
	{
		res = res * (K - 1);
	}
	cout << res << endl;
}

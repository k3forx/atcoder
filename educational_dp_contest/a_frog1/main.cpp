#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<int> h(N);
	for (int i = 0; i < N; i++)
	{
		cin >> h[i];
	}

	vector<int> dp(N);
	dp[0] = 0;
	dp[1] = abs(h[1] - h[0]);
	for (int i = 2; i < N; i++)
	{
		int tmp1 = dp[i - 1] + abs(h[i] - h[i - 1]);
		int tmp2 = dp[i - 2] + abs(h[i] - h[i - 2]);
		// cout << "i: " << i << ", tmp1: " << tmp1 << ", tmp2: " << tmp2 << endl;
		if (tmp1 <= tmp2)
		{
			dp[i] = dp[i - 1] + abs(h[i] - h[i - 1]);
		}
		else
		{
			dp[i] = dp[i - 2] + abs(h[i] - h[i - 2]);
		}
	}

	cout << dp[N - 1] << endl;
}
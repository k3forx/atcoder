#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C, K;
	cin >> A >> B >> C >> K;

	int max = 0;
	while (K > 0 & A > 0)
	{
		max = max + 1;
		A--;
		K--;
	}
	while (K > 0 & B > 0)
	{
		if (B > 0)
		{
			B--;
			K--;
		}
	}

	while (K > 0 & C > 0)
	{
		max = max - 1;
		C--;
		K--;
	}
	cout << max << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	string res = "";
	while (A >= 0 || B >= 0)
	{

		if (C == 0)
		{
			A = A - 1;
			if (A <= 0)
			{
				res = "Aoki";
				break;
			}
			B = B - 1;
			if (B <= 0)
			{
				res = "Takahashi";
				break;
			}
		}
		else
		{
			B = B - 1;
			if (B <= 0)
			{
				res = "Takahashi";
				break;
			}
			A = A - 1;
			if (A <= 0)
			{
				res = "Aoki";
				break;
			}
		}
	}
	cout << res << endl;
}

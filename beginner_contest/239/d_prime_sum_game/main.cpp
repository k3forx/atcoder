#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int num)
{
	if (num < 2)
		return false;
	else if (num == 2)
		return true;
	else if (num % 2 == 0)
		return false; // 偶数はあらかじめ除く

	double sqrtNum = sqrt(num);
	for (int i = 3; i <= sqrtNum; i += 2)
	{
		if (num % i == 0)
		{
			// 素数ではない
			return false;
		}
	}

	// 素数である
	return true;
}

int main()
{
	int A, B, C, D;
	cin >> A >> B >> C >> D;

	bool res = false;
	int cnt = 0;
	for (int i = A; i <= B; i++)
	{
		for (int j = C; j <= D; j++)
		{
			int tmp = i + j;
			bool r = IsPrime(tmp);
			// cout << "tmp: " << tmp << ", isPrime: " << r << endl;
			if (r)
			{
				cnt++;
				break;
			}
		}
	}

	if (cnt == (B - A + 1))
	{
		cout << "Aoki" << endl;
	}
	else
	{
		cout << "Takahashi" << endl;
	}
}

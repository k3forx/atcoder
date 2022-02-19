#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long N;
	cin >> N;

	long long div = pow(10, 9) + 7;
	long long a = 1;
	for (long i = 1; i <= N; i++)
	{
		a = a * i;
		if (a >= div)
		{
			a = a % div;
		}
	}

	cout << a << endl;
}
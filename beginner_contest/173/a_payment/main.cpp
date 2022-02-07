#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int res = 1000 - (N % 1000);

	if (res == 1000)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << res << endl;
	}
}

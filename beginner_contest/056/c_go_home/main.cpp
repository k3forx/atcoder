#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x;
	cin >> x;

	long long dist = 0;
	int cnt = 0;
	for (int i = 1; i <= x; i++)
	{
		dist = dist + i;
		cnt++;
		if (dist >= x)
		{
			break;
		}
	}
	cout << cnt << endl;
}
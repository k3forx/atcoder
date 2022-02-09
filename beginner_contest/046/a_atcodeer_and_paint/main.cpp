#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> data(3);
	data[0] = a;
	data[1] = b;
	data[2] = c;
	sort(data.begin(), data.end());

	int cnt = 3;
	int ini = data[0];
	for (int i = 1; i < 3; i++)
	{
		// cout << data[i] << endl;
		if (ini == data[i])
		{
			cnt = cnt - 1;
		}
		ini = data[i];
	}

	cout << cnt << endl;
}

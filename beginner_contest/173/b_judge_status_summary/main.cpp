#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<string> list(N);
	for (int i = 0; i < N; i++)
	{
		cin >> list.at(i);
		// cout << list.at(i) << endl;
	}

	int acCnt = 0, waCnt = 0, tleCnt = 0, reCnt = 0;

	for (int i = 0; i < N; i++)
	{
		if (list.at(i) == "AC")
		{
			acCnt++;
		}
		if (list.at(i) == "WA")
		{
			waCnt++;
		}
		if (list.at(i) == "TLE")
		{
			tleCnt++;
		}
		if (list.at(i) == "RE")
		{
			reCnt++;
		}
	}

	cout << "AC x " << acCnt << endl;
	cout << "WA x " << waCnt << endl;
	cout << "TLE x " << tleCnt << endl;
	cout << "RE x " << reCnt << endl;
}

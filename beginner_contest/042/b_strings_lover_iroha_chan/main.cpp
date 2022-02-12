#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, L;
	cin >> N >> L;

	vector<string> ss(N);
	for (int i = 0; i < N; i++)
	{
		cin >> ss.at(i);
		// cout << ss.at(i) << endl;
	}

	// cout << "-----" << endl;

	sort(ss.begin(), ss.end());
	for (int i = 0; i < N; i++)
	{
		cout << ss.at(i);
	}
	cout << endl;
}

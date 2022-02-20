#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	vector<long long> a(N);
	for (int i = 0; i < N; i++)
	{
		cin >> a.at(i);
	}

	sort(a.begin(), a.end());
	a.erase(unique(a.begin(), a.end()), a.end());
	cout << a.size() << endl;
}
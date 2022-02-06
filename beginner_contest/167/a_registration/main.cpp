#include <bits/stdc++.h>
using namespace std;

int main()
{
	string S;
	string T;
	cin >> S >> T;

	bool isSame = true;
	for (int i = 0; i < S.size(); i++)
	{
		if (S.at(i) != T.at(i))
		{
			isSame = false;
			break;
		}
	}
	if (isSame)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

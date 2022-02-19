#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long H;
	cin >> H;

	double c = 12800000;
	double res = sqrt(H * (12800000 + H));
	cout << setprecision(20) << static_cast<long double>(res) << endl;
}
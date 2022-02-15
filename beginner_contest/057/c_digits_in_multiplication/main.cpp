#include <bits/stdc++.h>
using namespace std;

int main()
{
	long N;
	cin >> N;

	// cout << N << endl;
	long res = to_string(N).size();
	for (long a = 1; a <= sqrt(N); a++)
	{
		// cout << "a: " << a << ", N % a: " << N % a << endl;
		if (N % a == 0)
		{
			long b = N / a;
			long tmp = max(to_string(a).size(), to_string(b).size());

			// cout << "a: " << a << ", b: " << b << ", tmp: " << tmp << endl;
			if (tmp < res)
			{
				res = tmp;
			}
		}
	}

	cout << res << endl;
}